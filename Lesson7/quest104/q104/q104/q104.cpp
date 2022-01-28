#include <iostream>

int enterValue()
{
	int x;
	std::cout << "Enter value: ";
	std::cin >> x;
	return x;
}

char enterChar()
{
	char c; 
	do
	{
		std::cout << "Enter char + or - or * or /: ";
		std::cin >> c;
	}

	while (c != '+' && c != '-' && c!='*' && c!='/');

	return c;
}


int main()
{
	int a = enterValue();

	char c = enterChar();

	int b = enterValue();



	return 0;
}