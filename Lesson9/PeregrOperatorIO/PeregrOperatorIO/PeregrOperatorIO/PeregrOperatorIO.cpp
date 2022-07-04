/*
#include <iostream>
#include <string>

class gamer
{
	std::string name;
	std::string race;
	int level;
	double score;

public:
	gamer(std::string n="noname", std::string r="norace", int l = 0, int s = 0):
	name(n),race(r),level(l),score(s) {}

	friend std::ostream& operator<< (std::ostream &o, const gamer &b);
	friend std::istream& operator>> (std::istream& i, gamer& b);
};

std::ostream& operator<<(std::ostream& o, const gamer& b)
{
	o << b.name << " " << b.race << " " << b.score << " " << b.level << std::endl;
	return o;
}

std::istream& operator>>(std::istream& i, gamer& b)
{
	i >> b.name;
	i >> b.race;
	i >> b.score;
	i >> b.level;
	return i;
}

int main()
{
	gamer vik;
	
	std::cout << "Enter Name, Race, Score and Level: ";
	std::cin >> vik;

	std::cout << "your Heroes: ";
	std::cout << vik;

	return 0;
}
*/

