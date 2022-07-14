#include <iostream>

//функция деления чисел с проверкой на переданыне параметры
/*
double divide(int a, int b, bool &succes)
{
	if (b==0)
	{
		succes = false;
		return 0.0;
	}

	succes = true;
	return static_cast<double>(a) / b;
}
*/

int main()
{
	//деление чисел с проверкой
	/*
	bool succes;
	int a = 8;
	int b = 4;
	double c = divide(a, b, succes);

	if (!succes)
	{
		std::cerr << "Error occured" << std::endl;
	}
	else
	{
		std::cout << "answer: " << c << std::endl;
	}
	*/


	std::ifstream setupIni("setup.ini");

	if (!setupIni)
		return ERROR_OPENING_FILE;

	if (!readIntegerFile(setupIni, m_firstParametr))
		return ERROR_READING_VALUE;


	return 0;
}