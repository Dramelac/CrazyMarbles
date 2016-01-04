#include "imagemanager.h"

sf::Image *ImageManager::GetImage(std::string &name)
{
    std::map<std::string,sf::Image>::iterator iter=m_images.find(name);
    if(iter==m_images.end())
    {
        sf::Image img;
        img.LoadFromFile(name);
        m_images.insert(std::pair<std::string,sf::Image>(name,img));
        iter=m_images.find(name);
    }
    return &(iter->second);
}

void ImageManager::clear()
{
    m_images.clear();
}
