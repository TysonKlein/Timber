//Include important C++ libraries here
#include <SFML/Graphics.hpp>

//Make code easier to type by using the SFML namespace
using namespace sf;

int main()
{
    //Create a videomode object
    VideoMode vm(1920, 1080);

    //create and open a window for the game
    RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

    //Create a texture to hold a graphic on the GPU
    Texture textureBackground;

    //Load a graphic into the texture
    textureBackground.loadFromFile("graphics/background.png");

    //Create a sprite
    Sprite spriteBackground;

    //Attach the texture to the sprite
    spriteBackground.setTexture(textureBackground);

    //Set the spriteBackground to cover the screen, set location to top left corner
    spriteBackground.setPosition(0, 0);

    //Main game loop
    while (window.isOpen())
    {
        //Handle inputs
        //*************
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }

        //Update the Scene
        //****************

        //Draw the scene
        //**************

            //Clear the frame
            window.clear();

            //Draw the scene
            window.draw(spriteBackground);

            //Display the scene
            window.display();
    }

    return 0;
}