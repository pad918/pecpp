#include <iostream>
#include <SFML/Graphics.hpp>
#include "Canvas.h"


wm::Canvas::Canvas(sf::Vector2i canvas_size){
    test=0;
    pixels = new sf::Uint8[canvas_size.x*canvas_size.y*4];//Array of 8 bit RGBA pixels
    for(int i=0; i<canvas_size.x*canvas_size.y*4;i+=4){
        pixels[i]=255;
        pixels[i+1]=0;
        pixels[i+2]=128;
        pixels[i+3]=255;
    }
    texture.create(canvas_size.x, canvas_size.y);
    texture.update(pixels);
    body.setTexture(texture);
}

void wm::Canvas::render(sf::RenderWindow &window){
    window.draw(body);
}