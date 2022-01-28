#include <iostream>

int sum(int a = 5, int b = 10) //заранее устанолвенные параметры это и есть параметры по умолчанию
{
	return a + b;
}

int main()
{
	std::cout<<sum()<<"\n";

	int a = 1991;
	int b = 30;
	std::cout << sum(a, b) << "\n";

	return 0;
}