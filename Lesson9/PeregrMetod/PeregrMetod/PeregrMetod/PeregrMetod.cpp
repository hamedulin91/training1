#include <iostream>

class gamer
{
private:
	int score;
public:
	gamer(int s=0):score(s) {}

	int getS() { return score; }

	gamer operator+(gamer& a);

};

gamer gamer::operator+(gamer& a)
{
	return gamer(score + a.score);
}




int main()
{
	gamer Mik(100);
	gamer Vik(200);
	gamer team(Mik + Vik);
	std::cout << team.getS();

	return 0;
}