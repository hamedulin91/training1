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
	
	int **array = new int*[15]; // �������� ������ �� 15 ���������� ���� int � ��� ���� ������
	for (int count = 0; count < 15; ++count)
		array[count] = new int[7]; // � ��� ���� �������

	
	
	
	return 0;
}