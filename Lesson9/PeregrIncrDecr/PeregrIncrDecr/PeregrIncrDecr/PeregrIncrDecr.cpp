#include <iostream>
#include <string>

class player
{
private:
	
	double score;
	int level;
public:
	player( double s=0, int l=0): score(s), level(l) {}

	
	double GetS() { return score;  }
	int GetL() { return level; }

	friend std::ostream& operator<<(std::ostream& o, const player& b);
	friend std::istream& operator>>(std::istream& i, player& b);
	friend player operator+(const player &a, const player &b);
	friend player operator-(const player &a, const player &b);
	player operator--();
	player operator++();
};

std::ostream& operator<<(std::ostream &o, const player &b)
{
	o <<"Level: " << b.level <<" Score: " << b.score;
	return o;
}

std::istream& operator>>(std::istream& i, player& b)
{
	std::cout << "Enter level: ";
	i >> b.level;
	std::cout << "Enter score: ";
	i >> b.score;

	return i;
}

player operator+(const player& a, const player& b)
{
	return player(a.level + b.level && a.score + b.score);
}

player operator-(const player& a, const player& b)
{
	return player(a.level + b.level && a.score + b.score);
}

player player::operator++ ()
{
	return ++score && ++level;
}

player player::operator--()
{
	return --score && ++level;
}

int main()
{
	player Vik;

	std::cin >> Vik;

	std::cout << Vik;

	++Vik;

	std::cout << Vik;

	return 0;
}