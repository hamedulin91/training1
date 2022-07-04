#include <iostream>

class gamer
{
private:
	int score;
public:
	gamer(int s = 0) :score(s) {}

	int getS() { return score; }

	gamer operator-();

	gamer operator+ (const gamer& b);

};

gamer gamer::operator-()
{
	return -score;
}

gamer gamer::operator+(const gamer& b)
{
	return gamer(score + b.score);
}

int main()
{
	gamer Vik(1991);
	std::cout << (-Vik).getS();

	std::cout << std::endl;

	gamer Mik(30);
	std::cout << (Vik + Mik).getS();


	return 0;
}