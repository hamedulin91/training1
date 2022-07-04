#pragma once
#include <SFML/Graphics.hpp>

sf::View view; //Это и есть обьект класса вьюв который является камерой

sf::View GetCoordinatePlayerView(float px, float py)
{
	view.setCenter(px + 100, py);
	return view;
}