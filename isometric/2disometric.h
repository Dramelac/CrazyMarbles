#ifndef ISOMETRIC_H
#define ISOMETRIC_H
#include <SFML/Graphics.hpp>
#include <list>
#include <vector>
#include "imagemanager.h"

/************************************************************
IsometricMap

Implement a basic isometric map using SFML sprites.
************************************************************/

// Class to wrap up a sprite to include a world position
class IsometricMapSprite : public sf::Sprite
{
    public:
    IsometricMapSprite();
    IsometricMapSprite(const sf::Image &image, const sf::Vector2f &position=sf::Vector2f(0,0),
        const sf::Vector2f &scale=sf::Vector2f(1,1), float rotation=0.f, const sf::Color &color=sf::Color(255,255,255,255));
    ~IsometricMapSprite();

    void SetWorldPosition(float x, float y);
    void SetWorldPosition(const sf::Vector2f &position);
    sf::Vector2f GetWorldPosition() const;

    void SetWorldZ(float z);
    float GetWorldZ(){return m_z;}

    void setUseLighting(bool use){m_uselighting=use;}
    bool getUseLighting(){return m_uselighting;}

    protected:
    sf::Vector2f m_worldpos;
    float m_z;
    bool m_uselighting;
};

// Map node
class IsometricMapNode
{
    public:
    IsometricMapNode();
    ~IsometricMapNode();

    void drawFloors(sf::RenderWindow *win, sf::Color &color);
    void drawObjects(sf::RenderWindow *win, sf::Color &color);
    void drawWalls(sf::RenderWindow *win, sf::Color &color);
    void drawRoofs(sf::RenderWindow *win, sf::Color &color);

    void addFloor(IsometricMapSprite *s);
    void addWall(IsometricMapSprite *s);
    void addRoof(IsometricMapSprite *s);

    void insertSprite(IsometricMapSprite *s);
    void removeSprite(IsometricMapSprite *s);
    void clear();


    protected:

    std::list<IsometricMapSprite *> m_floors, m_walls, m_roofs, m_objects;
};

struct DynamicLight
{
    DynamicLight() : m_position(0,0), m_color(0,0,0), m_radius(0){}
    ~DynamicLight(){}

    void setColor(float r, float g, float b){m_color=sf::Vector3f(r,g,b);}
    void setRadius(float rad){m_radius=rad;}
    void setPosition(float x, float y){m_position=sf::Vector2f(x,y);}

    bool operator==(const DynamicLight &rhs) const
    {
        if(this == &rhs) return true;
        return false;
    }

    sf::Vector2f m_position;
    sf::Vector3f m_color;
    float m_radius;
};


class LightMap
{
    public:
    LightMap(int w, int h, int nodesize);
    ~LightMap();

    void resize(int w, int h);
    void clearStatic();
    void clearDynamic();
    void updateRegion(int sx, int sy, int num_nodes, int num_rows);
    DynamicLight *requestLight();
    void releaseLight(DynamicLight *light);
    sf::Color getLightValue(int x, int y);
    void setAmbient(float r, float g, float b);

    void addStaticLightCell(int x, int y, float r, float g, float b);
    void addStaticLightRadius(float x, float y, float r, float g, float b, float radius);

    void debugPrintLights();

    protected:
    std::vector<sf::Vector3f> m_static;
    std::vector<sf::Vector3f> m_final;
    std::list<DynamicLight> m_lights;
    sf::Vector3f m_ambient;
    int m_width, m_height, m_nodesize;
};


class IsometricMap
{
    public:
    IsometricMap(int w, int h, int nodesize);
    ~IsometricMap();

    void resize(int w, int h);
    void clear();

    void insertSprite(IsometricMapSprite *s);
    void removeSprite(IsometricMapSprite *s);
    void draw(sf::RenderWindow *win);

    sf::Vector2f projectMouseCoords(int mx, int my, sf::RenderWindow *win);

    void addLeftWall(int x, int y, std::string &name); // Set a left wall piece
    void addRightWall(int x, int y, std::string &name);
    void addFloor(int x, int y, std::string &name);
    void addRoof(int x, int y, std::string &name, float height);

    void setCenter(float x, float y) {m_centerx=x; m_centery=y;}

    LightMap *getLightMap(){return &m_lightmap;}


    protected:
    std::vector<IsometricMapNode> m_nodes;
    int m_width, m_height;
    int m_nodesize;
    float m_centerx, m_centery;
    std::list<IsometricMapSprite> m_mappieces;
    ImageManager m_mapimages;
    LightMap m_lightmap;

};


#endif
