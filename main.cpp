#include <SFML/Graphics.hpp>
#include <iostream>

const int WIDTH = 800;
const int HEIGHT = 600;
const int FPS = 60;

sf::RenderWindow* window;

void input();
void update(float delta);
void draw();

bool started;
bool paused;

int main()
{
    window = new sf::RenderWindow(sf::VideoMode(WIDTH, HEIGHT), "Arena");

    sf::Clock clock;
    while(window->isOpen())
    {
        input();
        if(clock.getElapsedTime().asSeconds() >= 1.0/FPS)
        {
            update(clock.restart().asSeconds());
            draw();
        }
    }

    delete window;

    return 0;
}

void input()
{
    sf::Event evt;
    while(window->pollEvent(evt))
    {
        //Close window on click or escape pressed
        if(evt.type == sf::Event::Closed || evt.key.code == sf::Keyboard::Escape)
            window->close();
    }
}

void update(float delta)
{

}

void draw()
{
    window->clear(sf::Color::Black);

    if(!started)
    {

    }
    else
    {
        if(paused)
        {

        }
        else
        {

        }
    }

    window->display();
}

/*
//Player
    sprite /position, rotation
    getSprite
//Map
    Map(cols, rows, (0 to x - map values))
    grid (2 dimensional array)
    getField
    setField
//Enemy
*/
