#include <iostream>

 inline int max(int a, int b)
{
	return a < b ? b : a;
}

int main()
{
	std::cout << max(1991, 2021)<<"\n";
	std::cout << max(30,1) << "\n";

	return 0;
}