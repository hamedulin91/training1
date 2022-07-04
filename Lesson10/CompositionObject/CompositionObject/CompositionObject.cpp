#include <iostream>
#include <string>
#include "point2d.h"
#include "creature.h"

int main()
{
	std::cout << "enter name";
	std::string name;
	std::cin >> name;
	creature viktor(name, point2d(2.2, 5.5));

	while (1)
	{
		std::cout << viktor << std::endl;



	}

	return 0;
}