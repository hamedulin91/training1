#include <iostream>

class Date //���������� �����. ������ ��� ��� ��������� ����� ��������� � ���� ���������� ������ �������  � ������� �� ���� ������
{
public:
	int d_day; //���������� ������ ������ ��� ������� ������
	int d_month;
	int d_year;

	void printDate() //������� ������ ������ ��� ������ ������
	{
		std::cout << "Day win: " << d_day << " " << d_month << " " << d_year;

	}
};

class Numbers
{
public:
	int a;
	int b;

	void Setval(int f, int s)
	{
		a = f;
		b = s;
	}

	void PrintVal()
	{
		std::cout << a << " " << b <<"\n";
	}
};

int main()
{
	Date DayWin{9, 05, 1945};

	DayWin.printDate();

	std::cout << "\n";

	Numbers num;
	num.Setval(1,2);

	Numbers num2{ 1991,30 };

	num.PrintVal();
	num2.PrintVal();




	return 0;
}