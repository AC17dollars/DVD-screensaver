#include <SFML/Graphics.hpp>
#include <time.h>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "DVD ScreenSaver", sf::Style::Titlebar | sf::Style::Close);
    window.setFramerateLimit(60);
    srand(time(NULL));

    sf::Texture texture;
    if (!texture.loadFromFile("DVD_logo.svg.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);

    //randomly choose starting point of sprite
    int x = rand() % 1000;
    int y = rand() % 600;
    
    sf::Vector2f shapePosition(x, y);
    sprite.setPosition(shapePosition);

    float xVelocity = 3.0f;
    float yVelocity = 3.0f;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }
        // movements
        shapePosition.x += xVelocity;
        shapePosition.y += yVelocity;

        if (shapePosition.x < 0 || shapePosition.x > window.getSize().x - sprite.getLocalBounds().width + 5)
            xVelocity = -xVelocity;
        if (shapePosition.y < 0 || shapePosition.y > window.getSize().y - sprite.getLocalBounds().height + 20)
            yVelocity = -yVelocity;

        sprite.setPosition(shapePosition);

        window.clear(sf::Color::White);
        window.draw(sprite);
        window.display();
    }
    return 0;
}