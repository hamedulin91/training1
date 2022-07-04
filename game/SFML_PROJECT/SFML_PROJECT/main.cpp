#include <SFML/Graphics.hpp>
#include <string>
#include "map.h"

class gamer
{
public:
	float x, y, w, h, dx, dy, speed = 0;
	int direction = 0;

	std::string file;

	sf::Image image;
	sf::Texture texture;
	sf::Sprite sprite;

	gamer(std::string F, float xX, float yY, float wW, float hH): file(F), x(xX),y(yY),w(wW),h(hH)
	{
		image.loadFromFile("image/"+file);
		texture.loadFromImage(image);
		sprite.setTexture(texture);
		sprite.setTextureRect(sf::IntRect(x, y, w, h));
	}

	void Update(float time)
	{
		switch (direction)
		{
		case 0: dx = -speed; dy = 0; break;
		case 1: dx = speed; dy = 0; break;
		case 2: dx = 0; dy = -speed; break;
		case 3: dx = 0; dy = speed; break;
		}

		x += dx * time;
		y += dy * time;

		speed = 0;
		sprite.setPosition(x, y);
	}
};

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "Space War");

	sf::Image mimage;
	mimage.loadFromFile("image/space.png");
	sf::Texture mtexture;
	mtexture.loadFromImage(mimage);
	sf::Sprite msprite;
	msprite.setTexture(mtexture);


	gamer Viktor("Ship.png",0,0,117,69);

	sf::Clock clock;
	float time;

	float curFrame = 0;

	while (window.isOpen())
	{
		time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 400;


		sf::Event event;
		while (window.pollEvent(event))
		{
			if ((event.type == sf::Event::Closed)||(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)))
			{
				window.close();
			}
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			Viktor.speed = 0.1;
			Viktor.direction = 0;

			curFrame += 0.05 * time;
			if (curFrame >= 2)
			{
				curFrame -= 2;
			}

			Viktor.sprite.setTextureRect(sf::IntRect(100*int(curFrame), 69*2, 100, 69));

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			Viktor.speed = 0.1;
			Viktor.direction = 1;

			curFrame += 0.05 * time;
			if (curFrame >= 2)
			{
				curFrame -= 2;
			}

			Viktor.sprite.setTextureRect(sf::IntRect(100*int(curFrame), 69 * 3, 100, 69));

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			Viktor.speed = 0.1;
			Viktor.direction = 2;

			curFrame += 0.05 * time;
			if (curFrame >= 2)
			{
				curFrame -= 2;
			}

			Viktor.sprite.setTextureRect(sf::IntRect(100*int(curFrame), 0, 90, 69));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			Viktor.speed = 0.1;
			Viktor.direction = 3;

			curFrame += 0.05 * time;
			if (curFrame >= 2)
			{
				curFrame -= 2;
			}

			Viktor.sprite.setTextureRect(sf::IntRect(100*int(curFrame), 69, 90, 69));
		}

		Viktor.Update(time);

		window.clear();

		for (int i = 0; i < H_MAP; i++)
		{
			for (int j = 0; j < W_MAP; j++)
			{
				if ((tmap[i][j] == '0' || tmap[i][j] == ' '))
				{
					msprite.setTextureRect(sf::IntRect(0,0,32,32));
				}

				if (tmap[i][j] == 's')
				{
					msprite.setTextureRect(sf::IntRect(32, 0, 32, 32));
				}
				
				if (tmap[i][j] == 'o')
				{
					msprite.setTextureRect(sf::IntRect(64, 0, 32, 32));
				}

				msprite.setPosition(j * 32, i * 32);
				window.draw(msprite);

			}
		}

		;

		window.draw(Viktor.sprite);
		window.display();

	}

	

	return 0;
}