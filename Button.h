#ifndef BUTTON_H // include guard
#define BUTTON_H
#include <iostream>
#include <SFML/Graphics.hpp>

namespace wm
{
    class Button{
    private:
        //Button look properties
        sf::Vector2f bttn_pos;
        sf::Vector2f bttn_size;
        std::string bttn_text;
        sf::RectangleShape body;
        sf::Font bttn_text_font;
        sf::Text bttn_text_obj;
        bool isActive;
        int valueToReturn; //A variable used to identify the buttons purpose
    public:
        Button(sf::Vector2f pos, sf::Vector2f size, int returnVal, std::string text, sf::Font &font);
        void render(sf::RenderWindow &window);
        int update(bool hasClicked, sf::Vector2f mousePos);
        void setPosition();
    };
} // namespace wm

#endif