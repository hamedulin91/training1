#include <iostream>
#include <string>
#include <windows.h>

int main ()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
tryagain:
	std::cout<<"������� ����� ����� �� 1 �� 10: ";
	std::cin>>x;
	
	if (x<1 || x>10) 
	{
		std::cout<<"�� ����� "<<x<<", ��� �� ������ �����"<<std::endl;
		goto tryagain;
	}
	else 
		std::cout<<"�� �����  "<<x<<std::endl;
	
	
	return 0;
}