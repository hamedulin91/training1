#include <iostream>
#include <windows.h>

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int x;
	std::cout<<"������� ��������: ";
	std::cin>>x;
	
	do 
	{
		std::cout<<x<<std::endl;
		x++;
	}
	while (x<=20);
	
	std::cout<<"����� �����";
	
	return 0;
}