#include <iostream>
#include <array>

//�������� �� ��������
void boo(int y)
{
	std::cout << "y= " << y << std::endl;

	y = 2009;

	std::cout << "y= " << y << std::endl;
}
//�������� �� ��������

//�������� �� ������
void boolink(int &ylink)
{
	ylink = 2017;
}
//�������� �� ������

//�������� �� ������
void booadr(int *adr)
{
	std::cout << *adr << std::endl;
	std::cout << &adr << std::endl;
	*adr = 10;
}
//�������� �� ������

//������� �� ��������
	int booint()
	{
		static int c = 10;
		int val = c * 3;
		return val;
	}
//������� �� ��������

	//������� �� ������
	int booRetur(std::array<int, 5> &arr) 
	{
		arr[4] = 10;
		return arr[4];
	}
	//������� �� ������

int main()
{

	//�������� �� ��������
	boo(1991);//��� �������� ������� ���������� � �������� ������� ��� ��������� ���������� � . ����� ���������� ������� ����� ������������
	
	int x = 2021;
	boo(x);//��� �������� ������� ��� ���������� �. �������� ��������� ���������� � �������� � �������. ����� ���������� � ������������ 

	boo(x-1991);//��� �������� ��������� ��������� ���������� � �������� �������. ����������� ������������

	//������ � ������� ���������� ����� ���������. ���� ��� ������ � ������� �� ��� �� ������ �� ���� �������� ��������
	//�������� �� ��������

	//�������� �� ������
	int xl = 2000;
	std::cout << xl << std::endl;
	boolink(xl);
	std::cout << xl << std::endl;
	//�������� �� ������

	//�������� �� ������
	
	int a = 8;
	int *b;
	b = &a;
	std::cout << a << std::endl;
	booadr(&a);
	std::cout << a<<std::endl;
	//�������� �� ������

	//������� �� ��������
	std::cout<< booint()<<std::endl;

	//������� �� ��������

	//������� �� ������
		
	std::array<int, 5> arr {1,2,3,4,5};
	std::cout << arr[4]<<'\n';
	std::cout<<booRetur(arr);
		
	//������� �� ������




	return 0;
}