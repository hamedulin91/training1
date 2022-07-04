#include <iostream>
#include <string>

class gamer
{
private:
	int score;
	int level;
	std::string car;
public:
	gamer(int s = 0, int l = 0, std::string c = "nocar") : score(s), level(l), car(c) {}

	int getS() { return score; }
	int getL() { return level; }
	std::string getC() { return car; }

	friend bool operator==(const gamer& a, const gamer& b);
	friend bool operator!=(const gamer& a, const gamer& b);

	friend bool operator <(const gamer& a, const gamer& b);
	friend bool operator >(const gamer& a, const gamer& b);
	friend bool operator <=(const gamer& a, const gamer& b);
	friend bool operator >=(const gamer& a, const gamer& b);
};

bool operator==(const gamer& a, const gamer& b)
{
	return (a.score == b.score && a.level == b.level);
}

bool operator!=(const gamer& a, const gamer& b)
{
	return !(a == b);
}

bool operator<(const gamer& a, const gamer& b) { return a.car > b.car; }
bool operator>(const gamer& a, const gamer& b) { return a.car < b.car; }
bool operator<=(const gamer& a, const gamer& b) { return a.car <= b.car; }
bool operator>=(const gamer& a, const gamer& b) { return a.car >= b.car; }

int main()
{
	gamer Vik(100, 2, "Lamba");
	gamer Mik(100, 1, "Ferrari");

	if (Vik.getL() == Mik.getL())
	{
		std::cout << "Level Vik and Mik some";
	}
	else
	{
		std::cout << "Level Vik and Mik NOT some";
	}

	if (Vik.getS() != Mik.getS())
	{
		std::cout << "Score Vik and Mik NOT some";
	}
	else
	{
		std::cout << "Score Vik and Mik SOME";
	}

	std::cout << Vik.getC() << " " << Mik.getC();


	return 0;
}