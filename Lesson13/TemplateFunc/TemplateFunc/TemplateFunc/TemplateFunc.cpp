#include <iostream>
#include <string>

/* ������ �����������  � ���������� ������� ��� ������ ��� ������ ����� ������������ ������� ������� ��������� ���������� ��� ������ ��� �������
int max(int a, int b)
{
	return (a > b) ? a : b;
}

double max(double a, double b)
{
	return (a > b) ? a : b;
}
*/

template <typename T>

const T &max(const T &a, const T &b)
{
	return (a > b) ? a : b;
}

int main()
{
	int i = max(1991, 2022);

	double ii = max(30.12, 2.6);

	char iii = max('V', 'M');




	return 0;
}