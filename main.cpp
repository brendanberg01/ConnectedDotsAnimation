//
// Created by Brendan Berg on 26.04.20.
//

#include <SFML/graphics.hpp>


int main()
{
    unsigned int canvasWidth = 960;
    unsigned int canvasHeight = 540;

    sf::RenderWindow window(sf::VideoMode(canvasWidth, canvasHeight),
                            std::string("Connected Dots"),
                            sf::Style::Default);

    while (window.isOpen())
    {
        auto event = sf::Event();
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Key::Escape)
                {
                    window.close();
                }
            }
        }

        window.setFramerateLimit(60);
        window.display();
    }

    return 0;
}
