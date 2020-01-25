#include "UIhandler.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Button.h"

wm::UIhandler::UIhandler(sf::Font &FONT){
    std::cout << "created uihandler object" << std::endl;
    MAIN_FONT=FONT;
    buttons.push_back(wm::Button(sf::Vector2f(0,0), sf::Vector2f(50,20),0, "File", MAIN_FONT));
    buttons.push_back(wm::Button(sf::Vector2f(50,0), sf::Vector2f(50,20),0, "Edit", MAIN_FONT));
    buttons.push_back(wm::Button(sf::Vector2f(100,0), sf::Vector2f(50,20),0, "Tools", MAIN_FONT));
    buttons.push_back(wm::Button(sf::Vector2f(150,0), sf::Vector2f(50,20),0, "Help", MAIN_FONT));
}

void wm::UIhandler::render(sf::RenderWindow &window){
    for(int i=0; i<buttons.size(); i++){
        buttons[i].render(window);
    }
}

void wm::UIhandler::testForClick(sf::Vector2i mousePos){
    for(int i=0; i<buttons.size();i++){
        std::string btnText=buttons[i].update(true, mousePos);
        if(btnText!=""){
            buttonActions(btnText);
            break; // Makes shure only one button registers as beeing pressed (Stacked buttons)
        }
    }
}

//Button actions are made here
void wm::UIhandler::buttonActions(std::string btnName){
    if(btnName=="File")
        std::cout << "Clicked file btn" << std::endl;
    else if(btnName == "Edit")
        std::cout << "Clicked edit btn" << std::endl;
    else
        std::cout << "Button action not yet implemented..." << std::endl;
}