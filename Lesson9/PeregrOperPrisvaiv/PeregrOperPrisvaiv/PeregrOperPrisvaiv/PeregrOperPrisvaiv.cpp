#include <iostream>

class player
{
private:
	int score;
	int level;
public:
	player(int l = 0 , int s = 0):level(l),score(s) {}

	player(const player& p) :score(p.score), level(p.level) {}

	player& operator= (const player& a);

	friend std::ostream& operator<<(std::ostream& o, const player& b);
};

std::ostream& operator<<(std::ostream& o, const player& b)
{
	o << b.level << " " << b.score << std::endl;
	return o;
}

player& player::operator= (const player& b)
{
	score = b.score;
	level = b.level;
	return *this;
}

int main()
{
	player Vik(80, 800);

	player Mik;

	Mik = Vik;


	return 0;
}
