#include <iostream>

int fib(int a)
{
	if (a < 1)
	{
		return 1;
	}
	if (a == 0)
	{
		return 0;
	}



	return fib(a - 1) + fib(a - 2);

}

int main()
{

	for (int i = 0; i <= 10; ++i)
	{
		std::cout << fib(i) << " ";
	}

	return 0;
}