#ifndef IMAGEMANAGER_H
#define IMAGEMANAGER_H
#include <SFML/Graphics.hpp>
#include <map>

class ImageManager
{
    public:
    ImageManager(){}
    ~ImageManager(){clear();}

    sf::Image *GetImage(std::string &name);
    void clear();

    protected:
    std::map<std::string,sf::Image> m_images;
};

#endif
