#include "2disometric.h"
#include <algorithm>
#include <cmath>
#include <iostream>

// Function to convert a world position to a screen (view) position
sf::Vector2f WorldToScreen(sf::Vector2f v)
{
    return sf::Vector2f(2.0f*v.x - 2.0f*v.y, v.x + v.y);
}

// Function to convert a screen (view) position to a world position
sf::Vector2f ScreenToWorld(sf::Vector2f v)
{
    return sf::Vector2f((v.x+2.0f*v.y)/4.0f, (2.0f*v.y-v.x)/4.0f);
}


/********************************************
IsometricMapSprite
*********************************************/
IsometricMapSprite::IsometricMapSprite() : sf::Sprite(), m_worldpos(0,0){m_uselighting=true;}
IsometricMapSprite::IsometricMapSprite(const sf::Image &image, const sf::Vector2f &position,
    const sf::Vector2f &scale, float rotation, const sf::Color &color) :
    sf::Sprite(image,position,scale,rotation,color)
{
    m_worldpos=position;
    m_z=0;
    sf::Vector2f screenpos=WorldToScreen(m_worldpos);
    screenpos.y -= m_z;
    SetPosition(screenpos);
    m_uselighting=true;
}

IsometricMapSprite::~IsometricMapSprite(){}
void IsometricMapSprite::SetWorldPosition(float x, float y)
{
    m_worldpos=sf::Vector2f(x,y);
    sf::Vector2f screenpos=WorldToScreen(m_worldpos);
    screenpos.y -= m_z;
    SetPosition(screenpos);
}

void IsometricMapSprite::SetWorldPosition(const sf::Vector2f &position)
{
    m_worldpos=position;
    sf::Vector2f screenpos=WorldToScreen(m_worldpos);
    screenpos.y -= m_z;
    SetPosition(screenpos);
}

void IsometricMapSprite::SetWorldZ(float z)
{
    m_z=z;
    sf::Vector2f screenpos=WorldToScreen(m_worldpos);
    screenpos.y -= m_z;
    SetPosition(screenpos);
}

sf::Vector2f IsometricMapSprite::GetWorldPosition() const
{
    return m_worldpos;
}


// Function to find the right place in a list to insert a sprite
// Lists are sorted ascending, with the sort value equal to the sprite's center X and Y summed together.
std::list<IsometricMapSprite *>::iterator findSpotInSpriteList(IsometricMapSprite *s, std::list<IsometricMapSprite *> &spritelist)
{
    std::list<IsometricMapSprite *>::iterator iter=spritelist.begin();
    sf::Vector2f worldpos=s->GetWorldPosition();
    float z=s->GetWorldZ();
    float sortval=worldpos.x + worldpos.y + z;

    while(iter != spritelist.end())
    {
        sf::Vector2f npos=(*iter)->GetWorldPosition();
        float nz=(*iter)->GetWorldZ();
        if(npos.x+npos.y+nz > sortval) return iter;
        ++iter;
    }
    return iter;
}

/*************************************************
IsometricMapNode
**************************************************/

IsometricMapNode::IsometricMapNode(){}
IsometricMapNode::~IsometricMapNode(){}

void IsometricMapNode::addFloor(IsometricMapSprite *s)
{
    m_floors.push_back(s);
}

void IsometricMapNode::addWall(IsometricMapSprite *s)
{
    m_walls.push_back(s);
}

void IsometricMapNode::addRoof(IsometricMapSprite *s)
{
    m_roofs.push_back(s);
}

void IsometricMapNode::drawFloors(sf::RenderWindow *win, sf::Color &color)
{
    for(std::list<IsometricMapSprite *>::iterator iter=m_floors.begin(); iter!=m_floors.end(); ++iter)
    {
        if((*iter)->getUseLighting()) (*iter)->SetColor(color);
        win->Draw(*(static_cast<sf::Sprite *>(*iter)));
    }
}
void IsometricMapNode::drawObjects(sf::RenderWindow *win, sf::Color &color)
{
    for (std::list<IsometricMapSprite *>::iterator iter=m_objects.begin(); iter!=m_objects.end(); ++iter)
    {
        if((*iter)->getUseLighting()) (*iter)->SetColor(color);
        sf::Sprite *s = static_cast<sf::Sprite *>(*iter);
        win->Draw(*s);
    }
}

void IsometricMapNode::drawWalls(sf::RenderWindow *win, sf::Color &color)
{
   for(std::list<IsometricMapSprite *>::iterator iter=m_walls.begin(); iter!=m_walls.end(); ++iter)
    {
        if((*iter)->getUseLighting()) (*iter)->SetColor(color);
        win->Draw(*(static_cast<sf::Sprite *>(*iter)));
    }
}

void IsometricMapNode::drawRoofs(sf::RenderWindow *win, sf::Color &color)
{
    for(std::list<IsometricMapSprite *>::iterator iter=m_roofs.begin(); iter!=m_roofs.end(); ++iter)
    {
        if((*iter)->getUseLighting()) (*iter)->SetColor(color);
        win->Draw(*(static_cast<sf::Sprite *>(*iter)));
    }
}

void IsometricMapNode::insertSprite(IsometricMapSprite *s)
{
    sf::Vector2f worldpos=s->GetWorldPosition();
    std::list<IsometricMapSprite *>::iterator iter=findSpotInSpriteList(s, m_objects);
    m_objects.insert(iter, s);
    m_objects.unique();
}

void IsometricMapNode::removeSprite(IsometricMapSprite *s)
{
    m_objects.remove(s);
}

void IsometricMapNode::clear()
{
    m_floors.clear();
    m_walls.clear();
    m_roofs.clear();
    m_objects.clear();
}





/**********************************************************************
IsometricMap
***********************************************************************/

IsometricMap::IsometricMap(int w, int h, int nodesize) : m_width(w), m_height(w), m_nodesize(nodesize), m_centerx(0), m_centery(0), m_lightmap(w,h,nodesize)
{
    m_nodes.resize(w*h);
}

IsometricMap::~IsometricMap()
{
}

void IsometricMap::resize(int w, int h)
{
    clear();
    m_nodes.resize(w*h);
}

void IsometricMap::clear()
{
    for(int c=0; c<m_width*m_height; ++c) m_nodes[c].clear();
    m_mappieces.clear();
    m_mapimages.clear();
}

void IsometricMap::insertSprite(IsometricMapSprite *s)
{
    // Figure out which cell it lies within
    sf::Vector2f worldpos=s->GetWorldPosition();
    int cx=(int)(worldpos.x) / m_nodesize;
    int cy=(int)(worldpos.y) / m_nodesize;
    if(cx<0) cx=0; if(cx>=m_width) cx=m_width-1; if(cy<0) cy=0; if(cy>=m_height) cy=m_height-1;

    m_nodes[cy*m_width+cx].insertSprite(s);
}

void IsometricMap::removeSprite(IsometricMapSprite *s)
{
    // Figure out which cell it lies within
    sf::Vector2f worldpos=s->GetWorldPosition();
    int cx=(int)(worldpos.x) / m_nodesize;
    int cy=(int)(worldpos.y) / m_nodesize;
    if(cx<0) cx=0; if(cx>=m_width) cx=m_width-1; if(cy<0) cy=0; if(cy>=m_height) cy=m_height-1;
    m_nodes[cy*m_width+cx].removeSprite(s);
}

sf::Vector2f IsometricMap::projectMouseCoords(int mx, int my, sf::RenderWindow *win)
{
    // Calculate view
    sf::View view=win->GetView();
    // Calculate coords of mouse relative to view
    sf::Vector2f center=WorldToScreen(sf::Vector2f(m_centerx, m_centery));
    sf::Vector2f viewsize=view.GetSize();
    sf::Vector2f mousecoords=ScreenToWorld(sf::Vector2f((center.x-viewsize.x/2.0f)+(float)mx, (center.y-viewsize.y/2.0f)+(float)my));
    return mousecoords;
}

void IsometricMap::draw(sf::RenderWindow *win)
{
    // Do a brain dead whole-map scan for now
    // Set view
    sf::View view=win->GetView();
    // Reverse project center
    sf::Vector2f center=WorldToScreen(sf::Vector2f(m_centerx,m_centery));
    view.SetCenter(center);
    win->SetView(view);

    // Reverse-project top-left corner
    sf::Vector2f viewsize=view.GetSize();
    sf::Vector2f topleft=ScreenToWorld(sf::Vector2f(center.x-viewsize.x/2.0f, center.y-viewsize.y/2.0f));
    int sx=(int)(topleft.x/(float)m_nodesize);
    int sy=(int)(topleft.y/(float)m_nodesize);

    // Move start location up and left one node. (subtract 1 from sx
    sx-=2;

    // Calculate how many nodes across to draw
    // A node's total width on-screen is calculated as 4*nodesize
    int num_nodes_across=(int)viewsize.x / (m_nodesize*4) + 4;

    // Calculate how many rows to draw
    // A node's total height on screen is calculated as 2*nodesize. Also, need to fudge it
    // a little bit by adding a value that approximates the maximum cell height to the size of the
    // viewport.
    int num_rows=(((int)viewsize.y+512) / (m_nodesize*2))*2;

    // Update lighting
    m_lightmap.updateRegion(sx,sy,num_nodes_across,num_rows);

    // Drawing proceeds as thus:
    // We begin at some starting node and proceed across the row. At each step, we increment x and decrement y
    // to move to the next node.
    // When a row is done, we move to the next row. This is done by:
    // If the current row is "even", then we move to the next row by incrementing x. If the current row is odd, we
    // move to the next row by incrementing y instead.
    // On even rows, we draw num_nodes+1 nodes, else we draw num_nodes nodes.
    int rowincx=1, rowincy=0;
    int drawnodes=num_nodes_across+1;

    int nodex=sx, nodey=sy;
    for(int row=0; row<num_rows; ++row)
    {
        if (row & 1)
        {
            // Odd row
            rowincx=0;
            rowincy=1;
            drawnodes=num_nodes_across;
        }
        else
        {
            rowincx=1;
            rowincy=0;
            drawnodes=num_nodes_across+1;
        }


        for(int node=0; node<drawnodes; ++node)
        {
            // Calculate cell coords
            int cellx=nodex+node;
            int celly=nodey-node;
            if(cellx>=0 && cellx<m_width && celly>=0 && celly<m_height)
            {
                sf::Color color=m_lightmap.getLightValue(cellx,celly);
                m_nodes[celly*m_width+cellx].drawFloors(win,color);
            }
        }

        nodex=nodex+rowincx;
        nodey=nodey+rowincy;
    }
// Draw objects
    nodex=sx, nodey=sy;
    for(int row=0; row<num_rows; ++row)
    {
        if (row & 1)
        {
            // Odd row
            rowincx=0;
            rowincy=1;
            drawnodes=num_nodes_across;
        }
        else
        {
            rowincx=1;
            rowincy=0;
            drawnodes=num_nodes_across+1;
        }


        for(int node=0; node<drawnodes; ++node)
        {
            // Calculate cell coords
            int cellx=nodex+node;
            int celly=nodey-node;
            if(cellx>=0 && cellx<m_width && celly>=0 && celly<m_height)
            {
                sf::Color color=m_lightmap.getLightValue(cellx,celly);
                m_nodes[celly*m_width+cellx].drawObjects(win,color);
                m_nodes[celly*m_width+cellx].drawRoofs(win,color);
                m_nodes[celly*m_width+cellx].drawWalls(win,color);
            }
        }

        nodex=nodex+rowincx;
        nodey=nodey+rowincy;
    }
}

void IsometricMap::addLeftWall(int x, int y, std::string &name)
{
    m_mappieces.push_front(IsometricMapSprite());
    IsometricMapSprite *s = &(m_mappieces.front());
    sf::Image *i=m_mapimages.GetImage(name);
    s->SetImage(*i);

    // Set the origin of the sprite
    // For left wall it is (w,h)
    unsigned int imgwidth=i->GetWidth();
    unsigned int imgheight=i->GetHeight();
    s->SetOrigin((float)imgwidth, (float)imgheight);

    // Set position of the sprite
    // For left wall, set to (originx+nodesize, originy+nodesize)
    float ox=(float)m_nodesize*(float)x;
    float oy=(float)m_nodesize*(float)y;
    s->SetWorldPosition(sf::Vector2f(ox+(float)m_nodesize-1.0f,oy+(float)m_nodesize-1.0f));

    // Add to cell
    m_nodes[y*m_width+x].addWall(s);
}

void IsometricMap::addRightWall(int x, int y, std::string &name)
{
    m_mappieces.push_front(IsometricMapSprite());
    IsometricMapSprite *s = &(m_mappieces.front());
    sf::Image *i=m_mapimages.GetImage(name);
    s->SetImage(*i);

    // Set the origin of the sprite
    // For right wall it is (0,h)
    unsigned int imgheight=i->GetHeight();
    s->SetOrigin((float)0, (float)imgheight);

    // Set position of the sprite
    // For right wall, set to (originx+nodesize, originy+nodesize)
    float ox=(float)m_nodesize*(float)x;
    float oy=(float)m_nodesize*(float)y;
    s->SetWorldPosition(sf::Vector2f(ox+(float)m_nodesize-1.0f,oy+(float)m_nodesize-1.0f));

    // Add to cell
    m_nodes[y*m_width+x].addWall(s);
}

void IsometricMap::addFloor(int x, int y, std::string &name)
{
    m_mappieces.push_front(IsometricMapSprite());
    IsometricMapSprite *s = &(m_mappieces.front());
    sf::Image *i=m_mapimages.GetImage(name);
    s->SetImage(*i);

    // Set the origin of the sprite
    // For floor it is (w/2,0)
    unsigned int imgwidth=i->GetWidth();
    s->SetOrigin((float)imgwidth/2.0f, 0.0f);

    // Set position of the sprite
    // For floor, set to (originx, originy)
    float ox=(float)m_nodesize*(float)x;
    float oy=(float)m_nodesize*(float)y;
    s->SetWorldPosition(sf::Vector2f(ox,oy));

    // Add to cell
    m_nodes[y*m_width+x].addFloor(s);
}

void IsometricMap::addRoof(int x, int y, std::string &name, float height)
{
    m_mappieces.push_front(IsometricMapSprite());
    IsometricMapSprite *s = &(m_mappieces.front());
    sf::Image *i=m_mapimages.GetImage(name);
    s->SetImage(*i);

    // Set the origin of the sprite
    // For roof it is (w/2,0)
    unsigned int imgwidth=i->GetWidth();
    s->SetOrigin((float)imgwidth/2.0f, 0.0f);

    // Set position of the sprite
    // For roof, set to (originx, originy)
    float ox=(float)m_nodesize*(float)x;
    float oy=(float)m_nodesize*(float)y;
    s->SetWorldPosition(sf::Vector2f(ox,oy));
    s->SetWorldZ(height);

    // Add to cell
    m_nodes[y*m_width+x].addRoof(s);
}



// LightMap
LightMap::LightMap(int w, int h, int nodesize) : m_ambient(1,1,1), m_width(w), m_height(h), m_nodesize(nodesize)
{
    m_static.resize(w*h);
    m_final.resize(w*h);
    clearStatic();
}

LightMap::~LightMap()
{
}

void LightMap::resize(int w, int h)
{
    m_width=w;
    m_height=h;
    m_static.resize(w*h);
    m_final.resize(w*h);
    clearStatic();
    clearDynamic();
}

void LightMap::clearStatic()
{
    for(int c=0; c<m_width*m_height; ++c)
    {
        m_static[c]=sf::Vector3f(0,0,0);
        m_final[c]=sf::Vector3f(0,0,0);
    }
}

void LightMap::clearDynamic()
{
    m_lights.clear();
}

void LightMap::debugPrintLights()
{
    for(std::list<DynamicLight>::iterator iter=m_lights.begin(); iter!=m_lights.end(); ++iter)
    {
        DynamicLight &l=(*iter);
        std::cout << "Light: (" << l.m_position.x<<","<<l.m_position.y<<") Color: (" <<
            l.m_color.x<<","<<l.m_color.y<<","<<l.m_color.z<<") Radius: " << l.m_radius << std::endl;
    }
}

void LightMap::updateRegion(int sx, int sy, int num_nodes, int num_rows)
{
    int rowincx=1, rowincy=0;
    int drawnodes=num_nodes+1;

    int nodex=sx, nodey=sy;
    for(int row=0; row<num_rows; ++row)
    {
        if (row & 1)
        {
            // Odd row
            rowincx=0;
            rowincy=1;
            drawnodes=num_nodes;
        }
        else
        {
            rowincx=1;
            rowincy=0;
            drawnodes=num_nodes+1;
        }


        for(int node=0; node<drawnodes; ++node)
        {
            // Calculate cell coords
            int cellx=nodex+node;
            int celly=nodey-node;
            if(cellx>=0 && cellx<m_width && celly>=0 && celly<m_height)
            {
               // m_final[celly*m_width+cellx]=sf::Vector3f(0,0,0);
                // Calculate coord of center of point
                float cx=(float)cellx * (float)m_nodesize + (float)m_nodesize/2.0f;
                float cy=(float)celly * (float)m_nodesize + (float)m_nodesize/2.0f;

                // Set cell to ambient + static
                sf::Vector3f staticlight=m_static[celly*m_width+cellx];
                sf::Vector3f light(0,0,0);

                // Iterate dynamic lights
                for(std::list<DynamicLight>::iterator iter=m_lights.begin(); iter!=m_lights.end(); ++iter)
                {
                    float dx=cx-(*iter).m_position.x, dy=cy-(*iter).m_position.y;
                    if (fabs(dx) <= (*iter).m_radius && fabs(dy) <= (*iter).m_radius)
                    {
                        // Light is in range of point
                        float dist=sqrt(dx*dx+dy*dy);
                        float intensity=((*iter).m_radius - dist) / (*iter).m_radius;
                        intensity = std::max(0.f, std::min(1.0f,intensity));  // Clamp it
                        light.x+=(*iter).m_color.x*intensity;
                        light.y+=(*iter).m_color.y*intensity;
                        light.z+=(*iter).m_color.z*intensity;
                    }
                }
                m_final[celly*m_width+cellx]=sf::Vector3f(m_ambient.x+staticlight.x+light.x, m_ambient.y+staticlight.y+light.y, m_ambient.z+staticlight.z+light.z);


            }
        }

        nodex=nodex+rowincx;
        nodey=nodey+rowincy;
    }
}

DynamicLight *LightMap::requestLight()
{
    m_lights.push_front(DynamicLight());
    return &m_lights.front();
}

void LightMap::releaseLight(DynamicLight *light)
{
    m_lights.remove(*light);
}

sf::Color LightMap::getLightValue(int x, int y)
{
    if(x<0 || x>=m_width || y<0 || y>=m_height) return sf::Color(0,0,0,255);
    sf::Vector3f color=m_final[y*m_width+x];
    color.x=std::max(0.f,std::min(1.f,color.x));
    color.y=std::max(0.f,std::min(1.f,color.y));
    color.z=std::max(0.f,std::min(1.f,color.z));
    return sf::Color((unsigned char)(color.x*255.0f), (unsigned char)(color.y*255.0f), (unsigned char)(color.z*255.0f));
}

void LightMap::setAmbient(float r, float g, float b)
{
    m_ambient=sf::Vector3f(r,g,b);
}

void LightMap::addStaticLightCell(int x, int y, float r, float g, float b)
{
    if(x<0 || x>=m_width || y<0 || y>=m_height) return;
    sf::Vector3f &s=m_static[y*m_width+x];
    s.x+=r;
    s.y+=g;
    s.z+=b;
}

void LightMap::addStaticLightRadius(float x, float y, float r, float g, float b, float radius)
{
    // Get region of cells
    int sx=(int)((x-radius)/(float)m_nodesize)-1;
    int sy=(int)((y-radius)/(float)m_nodesize)-1;
    int dx=(int)((x+radius)/(float)m_nodesize)+1;
    int dy=(int)((y+radius)/(float)m_nodesize)+1;

    for(int cx=sx; cx<=dx; ++cx)
    {
        for(int cy=sy; cy<=dy; ++cy)
        {
            if(cx>=0 && cx<m_width && cy>=0 && cy<m_height)
            {
                sf::Vector3f st=m_static[cy*m_width+cx];
                float cellx=(float)cx * (float)m_nodesize + (float)m_nodesize/2.0f;
                float celly=(float)cy * (float)m_nodesize + (float)m_nodesize/2.0f;
                float dx=cellx-x, dy=celly-y;
                float dist=sqrt(dx*dx+dy*dy);
                float intensity=(radius-dist)/radius;
                intensity=std::max(0.f,std::min(1.0f,intensity));
                st.x+=r*intensity;
                st.y+=g*intensity;
                st.z+=b*intensity;
                m_static[cy*m_width+cx]=st;
            }
        }
    }
}
