#pragma once
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <cstdlib>

using namespace sf;

using namespace std;

class Card
{
private:
    Texture texture;
    Sprite sprite;
public:

    Card(string &);

    void setTexture(Texture);

    Texture getTexture();

    void setSprite(Sprite);

    Sprite getSprite();

    
	


};

