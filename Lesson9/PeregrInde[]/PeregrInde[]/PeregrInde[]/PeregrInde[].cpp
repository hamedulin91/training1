/*#include <iostream>

class player
{
private:
	int level[80];
public:
	int& operator[](const int& ind);
	friend std::ostream& operator<<(std::ostream& o, const player& b);

};

int& player::operator[](const int& ind)
{
	return level[ind];
}

std::ostream& operator<<(std::ostream& o, const player& b)
{
	o << b.level;
	return o;
}


int main()
{
	player Vik;
	Vik[1] = 2022;
	std::cout << Vik[1];

	return 0;
}

*/

/*
#include <iostream>

class player
{
private:
	int level[2];
public:
	int& operator[](const int &ind);
	const int& operator[] (const int &ind) const;
	friend std::ostream operator<<(std::ostream& a, const player& b);
};

int& player::operator[](const int& ind)
{
	return level[ind];
}

const int& player::operator[](const int& ind) const
{
	return level[ind];
}



int main()
{
	player Vik;
	Vik[1] = 2022;
	std::cout << Vik[1];

	player Mik;
	Mik[1] = 1991;
	std::cout << Mik[1];

	const player Team;
	Team[1] = 1999;

	return 0;
}

*/

/*
#include <iostream>
#include <cassert>

class player 
{
private:
	int level[2];
public:
	int& operator[](const int &ind);
};

int& player::operator[](const int& ind)
{
	assert(ind >= 0 && ind <= 10);

	return level[ind];
}

int main()
{
	player* vik = new player;
	(*vik)[1] = 1991;
	std::cout << (*vik)[1];
}

*/

/*
#include <iostream>
#include <cassert>

class gamer
{
private:
	int level[2];
public:
	int& operator[](const int &ind);

};

int& gamer::operator[](const int &ind)
{
	assert(ind >= 0 && ind < 2);
	return level[ind];
}

int main()
{
	gamer* vik = new gamer;
	(* vik)[0] = 1991;

	std::cout << (*vik)[0];

	return 0;
}
*/

