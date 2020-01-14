#ifndef BUTTON_H // include guard
#define BUTTON_H
#include <iostream>
#include <SFML/Graphics.hpp>

namespace wm
{
    class button{
    private:
        sf::Vector2f bttn_pos;
        sf::Vector2f bttn_size;

    public:
        button(sf::Vector2f pos, sf::Vector2f size);
    };
} // namespace wm




#endif