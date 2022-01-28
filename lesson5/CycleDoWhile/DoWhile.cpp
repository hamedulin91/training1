#include <iostream>
#include <windows.h>

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int x;
	std::cout<<"Введите значение: ";
	std::cin>>x;
	
	do 
	{
		std::cout<<x<<std::endl;
		x++;
	}
	while (x<=20);
	
	std::cout<<"Конец цикла";
	
	return 0;
}