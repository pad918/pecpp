#ifndef CANVAS_H // include guard
#define CANVAS_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Canvas.h"
namespace wm{
    
    class Canvas{
    public:
        Canvas(sf::Vector2i canvas_size);
        sf::Texture texture;
        sf::Sprite body;
        sf::Uint8 *pixels;
        int test;
        void render(sf::RenderWindow &window);
    };

}



#endif