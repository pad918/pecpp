#ifndef UIHANDLER_H // include guard
#define UIHANDLER_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Button.h"
#include "Canvas.h"

namespace wm{
    
    class UIhandler{
    private:
        std::vector<wm::Button> buttons;
        sf::Font MAIN_FONT;
        void buttonActions(std::string btnName, Canvas &canvas);
    public:
        UIhandler(sf::Font &FONT);
        void render(sf::RenderWindow &window);
        void testForClick(sf::Vector2i mousePos, Canvas &canvas);
    };



}



#endif