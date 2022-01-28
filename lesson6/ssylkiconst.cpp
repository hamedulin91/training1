#include <iostream>

int main ()
{
	const int a=5;
	const int &b = a;
	const int &c = 2021-1991;
	int d = 2021+29;
	const int &e = 1991+29;
	
	std::cout<<a<<"\n";
	std::cout<<b<<"\n";
	std::cout<<c<<"\n";
	std::cout<<d<<"\n";
	std::cout<<e<<"\n";
	
	
	return 0;
}