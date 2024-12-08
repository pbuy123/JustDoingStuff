#include "SFML/Graphics.hpp"
#include<iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Getting Better At Coding");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
            window.close();
        }

        
    }

    return 0;
}
