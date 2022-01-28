#include <iostream>
#include <string>

int main()
{
	int a = 1991;
	int *b;
	b=&a;
	std::cout<<b<<" => ";
	std::cout<<*b<<"\n";
	
	int **c;
	c=&b;
	std::cout<<c<<" => ";
	std::cout<<*c<<" => ";
	std::cout<<**c<<"\n";
	
	int **d = new int *[20];
	
	int **array = new int*[15]; // выдел€ем массив из 15 указателей типа int Ч это наши строки
	for (int count = 0; count < 15; ++count)
		array[count] = new int[7]; // а это наши столбцы

	
	
	
	return 0;
}