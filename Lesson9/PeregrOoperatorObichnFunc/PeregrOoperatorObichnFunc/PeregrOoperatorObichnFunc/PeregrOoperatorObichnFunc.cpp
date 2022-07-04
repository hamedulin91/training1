#include <iostream>

class Gamer
{
private:
	int score;
public:
	Gamer(int sScore = 0):score(sScore) {}

	int getScore() const { return score; }

};

Gamer operator* (const Gamer& a, const Gamer& b)
{
	return Gamer(a.getScore() * b.getScore());
}

int main()
{
	Gamer vik(500);
	Gamer mik(100);
	Gamer team(vik * mik);

	std::cout << team.getScore()<<std::endl;
	return 0;
}