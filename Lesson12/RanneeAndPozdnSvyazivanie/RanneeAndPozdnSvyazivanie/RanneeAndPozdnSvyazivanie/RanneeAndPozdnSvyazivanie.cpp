#include <iostream>

// ��� ���������� ��������� ��� ���������� , ����������, ������� � �� ������������� � �������� ���. � ������ �������
// ��������� ���� ������������ ����� � ������.
// ���������� ��� ������� ������� ������������ ������ ��������� , ���������� ������� � �� � ����� ������ 

//������ ���������

/*
void print(int val)
{
	std::cout << "Hello " << val << std::endl;
}

int main()
{
	int val = 1991;
	print(val); //��� ���������� ������ ����� ������� . ����������� � �������  ������� ���������� (����������� ��������)
	// �������� ��� ������ ����� ������� ��� ��������������(������� , ����������) � �������� �������.
	// ������ ����� ������ ��������� ����� ������� �� �������� ��� ���������� ��������� ���� ���������� ���������� ������� � ������ �������


	return 0;
}
*/

//������� ��������� ��� ������������ ��������
//������������� ����� ����� ���� ����������� ���������� ����� ������� �����. 

int sum(int a, int b)
{
	return a + b;
}

int razn(int a, int b)
{
	return a - b;
}

int umn(int a, int b)
{
	return a * b;
}

int main()
{
	int a;
	std::cout << "Enter value a: ";
	std::cin >> a;

	int b;
	std::cout << " Enter value b: ";
	std::cin >> b;

	int op;
	do
	{
		std::cout << "Enter znak (0=sum, 1=razn, 2=umn): ";
		std::cin >> op;
	} while (op < 0 || op>2);

	int (*ptr)(int, int) = nullptr;

	switch (op)
	{
	case 0: ptr = sum; break;
	case 1: ptr = razn; break;
	case 2: ptr = umn; break;
	}

	std::cout << " Rezultat: " << ptr(a, b)<<std::endl;
}