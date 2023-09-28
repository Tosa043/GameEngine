#include <SFML/Graphics.hpp>
#include <Windows.h>

using namespace sf;

int main()
{

    RenderWindow window(VideoMode(400, 400), L"Engine", Style::Default);

    window.setVerticalSyncEnabled(true);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }
    return 0;
}