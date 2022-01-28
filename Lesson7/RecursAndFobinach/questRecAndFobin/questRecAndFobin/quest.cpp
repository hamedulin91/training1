#include <iostream>

//формула факториала N!=N*(N-1)!

int fac(int a)
{
	if (a == 0)
	{
		return 0;
	}
	if (a == 1)
	{
		return 1;
	}

	return a * fac(a - 1);

}

int sumval(int a)
{
	if (a < 10)
	{
		return a;
	}
	return sumval(a/10)+a%10;
}

int main()
{
	for (int ind = 0; ind < 8; ++ind)
	{
		std::cout << fac(ind) << " ";
	}

	std::cout << "\n";

	sumval(83569);

	return 0;
}