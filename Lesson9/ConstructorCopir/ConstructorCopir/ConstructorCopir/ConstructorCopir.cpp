#include <iostream>
#include <cassert>

class player
{
private:
	int level;
	double score;
public:
	player(int l = 0, double s = 0.0):level(l), score(s) 
	{
		assert(l >= 0 && l < 80);
		assert(s >= 0 && s < 800);
	}

	player(const player &player): level(player.level), score(player.score)
	{
		std::cout << "Constructor copy"<<std::endl;
	}

	friend std::ostream& operator<<(std::ostream &o, const player& b);

};

std::ostream& operator<<(std::ostream& o, const player& b)
{
	o << b.level <<" " << b.score<<std::endl;
	return o;
}


int main()
{
	//player Vik(50, 500);
	player Mik(player(50,500));

	//std::cout << Vik;
	std::cout << Mik;

	return 0;
}