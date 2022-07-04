#include <iostream>
/*
class Gamer
{
private:
	int score;
public:
	Gamer(int gscore = 0):score(gscore) {};

	int GetScore() { return score; }

	friend Gamer operator+ (const Gamer &a, const Gamer &b);
	friend Gamer operator- (const Gamer &a, const Gamer &b);
	friend Gamer operator* (const Gamer &a, const Gamer &b);
	friend Gamer operator/ (const Gamer &a, const Gamer &b);
};

Gamer operator+ (const Gamer& a, const Gamer& b)
{
	return a.score + b.score;
}

Gamer operator- (const Gamer& a, const Gamer &b)
{
	return a.score - b.score;
}

Gamer operator* (const Gamer& a, const Gamer& b)
{
	return a.score * b.score;
}

Gamer operator/ (const Gamer& a, const Gamer& b)
{
	return a.score / b.score;
}

int main()
{
	Gamer Vik(1000);
	Gamer Mik(1500);

	Gamer Team(Vik + Mik);

	std::cout << Team.GetScore()<<std::endl;

	Gamer TeamRazn (Mik - Vik);

	std::cout << TeamRazn.GetScore() << std::endl;

	Gamer TeamMnoj(Vik * Mik);
	std::cout << TeamMnoj.GetScore() << std::endl;

	Gamer TeamDelen(Mik / Vik);
	std::cout << TeamDelen.GetScore() << std::endl;


	return 0;
}*/

class Fraction
{
private:
	int a;
	int b;
public:
	Fraction(int aA=0, int bB=0):a(aA), b(bB) {}

	friend Fraction operator* (const Fraction& a, int b);
	friend Fraction operator* (const Fraction& a, const Fraction& b);

	void print()
	{
		std::cout << a << "/" << b << std::endl;
	}
};

Fraction operator* (const Fraction& a, int b)
{
	return Fraction(a.a * b);
}

Fraction operator*(const Fraction& a, const Fraction& b)
{

	return Fraction (a.a * b.a);
}



int main()
{
	Fraction f1(3, 4);
	f1.print();

	Fraction f2(2, 7);
	f2.print();

	Fraction f3 = f1 * f3;
	f3.print();


	return 0;
}