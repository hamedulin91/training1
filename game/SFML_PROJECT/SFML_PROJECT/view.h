#pragma once
#include <SFML/Graphics.hpp>

sf::View view; //��� � ���� ������ ������ ���� ������� �������� �������

sf::View GetCoordinatePlayerView(float px, float py)
{
	view.setCenter(px + 100, py);
	return view;
}