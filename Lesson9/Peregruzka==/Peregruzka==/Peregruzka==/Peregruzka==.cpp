#include <iostream>
#include <string>

class gamer
{
private : 
	std::string name;
	std::string race;
public:
	gamer(std::string Nname = "name", std::string Rrace = "race"): name(Nname), race(Rrace) {}

	friend bool operator==(const gamer& a, const gamer& b);
	friend bool operator!=(const gamer& a, const gamer& b);
};

bool operator == (const gamer& a, const gamer& b)
{
	return (a.name == b.name && a.race == b.race);
}

bool operator != (const gamer & a, const gamer & b)
{
	return !(a == b);
}

int main()
{
	gamer Noname;
	gamer Noname1("Viktor", "Ork");

	if (Noname == Noname1)
	{
		std::cout << "Human same";
	}
	if (Noname != Noname1)
	{
		std::cout << "Human NO some";
	}

	return 0;
}