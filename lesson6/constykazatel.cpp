#include <iostream>

int main ()
{
	const int a = 8;
	const int *b = &a; //Указатель на константное значение . либо на обычное значение тоже можно 
	
	std::cout<<a<<"\n";
	std::cout<<b<<"\n";
	std::cout<<*b<<"\n";
	
	//*b = 20;
	
	int c = 20;
	b = &c;
	std::cout<<*b;
	std::cout<<"\n";
	
	int d = 1991;
	int *const e = &d;
	std::cout<<d<<"\n";
	std::cout<<&d<<"\n";
	std::cout<<e<<"\n";
	std::cout<<*e<<"\n";
	
	int f = 2021;
	*e = 2020;
	std::cout<<*e;
	
	
	
	return 0;
}