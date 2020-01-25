#include <iostream>
#include <SFML/Graphics.hpp>//test
#include "Button.h" 
#include "UIhandler.h"
#include "Canvas.h"

sf::Vector2f windowSize;

int main(){
	sf::Font MAIN_FONT;
	if (!MAIN_FONT.loadFromFile("Roboto-Medium.ttf"))
	{
		std::cout << "Could not load font" << std::endl;
	}
	wm::Canvas canvas(sf::Vector2i(100,100));
	windowSize.x = 1280/2; windowSize.y = 720/2;
	sf::RenderWindow window(sf::VideoMode(windowSize.x, windowSize.y), "THEGAME");
	//wm::Button btn(sf::Vector2f(100,100), sf::Vector2f(50,20),0, "Title", MAIN_FONT);
	wm::UIhandler UI(MAIN_FONT);
	sf::View view1(sf::FloatRect(0.f, 0.f, 1280.f, 720.f));
    window.setView(view1);

	while (window.isOpen()) {
		//Handeling window events like mouse and keyboard
		sf::Event event;
		while (window.pollEvent(event))
		{
			if(event.type==sf::Event::Closed)
				window.close();
			switch (event.type) {
			
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::KeyPressed:
				break;
			case sf::Event::MouseButtonReleased:
				UI.testForClick(sf::Mouse::getPosition(window), canvas); 
				break;
			default:
				break;
			}
				
		}	
		//window settings
		view1.setSize(sf::Vector2f(window.getSize().x, window.getSize().y));
		view1.setCenter(sf::Vector2f(window.getSize().x/2.0f,window.getSize().y/2.0f));
		window.setView(view1);
		window.clear();
		//Drawing loop
		UI.render(window);
		canvas.render(window);
		//Display to window
		window.display();
	}
}
