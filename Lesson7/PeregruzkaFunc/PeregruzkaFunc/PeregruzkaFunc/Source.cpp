#include <iostream>

void printPerem(int a)
{
	std::cout << a<< "\n";
}

int raznVal(int a, int b)
{
	return a - b;
}

double raznVal(double a, double b)
{
	return a - b;
}

int main()
{
	int a = 2021;
	printPerem(a);
	
	int b = 1991;
	printPerem(b);

	int c = raznVal(a,b);
	std::cout << c << "\n";

	double e = 20.20;
	double f = 12.14;
	double d = raznVal(e, f);
	std::cout << d;
	return 0;
}