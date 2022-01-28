#include <iostream>
#include <string>
#include <windows.h>

int main ()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
tryagain:
	std::cout<<"Введите целое число от 1 до 10: ";
	std::cin>>x;
	
	if (x<1 || x>10) 
	{
		std::cout<<"Вы ввели "<<x<<", Это не верное число"<<std::endl;
		goto tryagain;
	}
	else 
		std::cout<<"Вы ввели  "<<x<<std::endl;
	
	
	return 0;
}