#include <iostream>
#include <SFML/Graphics.hpp>
#include "Button.h" 

wm::Button::Button(sf::Vector2f pos, sf::Vector2f size, int returnVal, std::string text, sf::Font &font){
    bttn_text_obj.setString(text);
    bttn_text_obj.setFont(font);
    bttn_text_obj.setPosition(pos);
    bttn_text_obj.setCharacterSize(16);
    valueToReturn=returnVal;
    bttn_text=text;
    bttn_pos=pos;
    bttn_size=size;
    body.setSize(bttn_size);
    body.setPosition(bttn_pos);
    body.setFillColor(sf::Color(51,51,51));
    body.setOutlineThickness(1);
    body.setOutlineColor(sf::Color(255,255,255));
    isActive=false;
}

void wm::Button::render(sf::RenderWindow &window){
    window.draw(body);
    window.draw(bttn_text_obj);
}

std::string wm::Button::update(bool hasClicked, sf::Vector2i mousePos){ // Retrun value is used to chek if and which button has been pressed
    if(!hasClicked) 
        return "";
    else{
       if(mousePos.x > bttn_pos.x && mousePos.x < bttn_pos.x + bttn_size.x){
            if(mousePos.y > bttn_pos.y && mousePos.y < bttn_pos.y + bttn_size.y){
                return bttn_text;
            }
        }
    }
    return "";
}
void wm::Button::setPosition(){

    

}