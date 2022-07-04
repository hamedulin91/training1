#include <iostream>

class gamer
{
private:
	int level;
	double score;
public:
	gamer(int l = 0, double s = 0.0) :level(l), score(s) { std::cout << "constructor" << std::endl; }
	gamer(const gamer& g) :level(g.level), score(g.score) { std::cout << "constructor copy" << std::endl; }

	friend std::ostream& operator<<(std::ostream& o, const gamer& b);
};

std::ostream& operator<<(std::ostream& o, const gamer& b)
{
	o << b.level << " " << b.score << std::endl;
	return o;
}

int main()
{
	gamer Vik(5, 500);
	gamer Mik = Vik;

	std::cout << Vik << Mik;

	return 0;
}