/*  Напишите программу на C++ для подсчета букв, пробелов, чисел и других символов входной строки. Перейти к редактору
Ожидаемый результат

 Строка: Aa kiu, я swd skieo 236587. GH kiu: sieo ?? 25,33
письмо: 23                                               
пространство: 9                                                 
номер: 10                                               
другое: 6 */

#include <iostream>
#include <string>
#include <cstring>

void printText(const char* text, int numbtext)
{

	std::string nText;
	for (int i = 0; i < numbtext; ++i)
	{
		if (text[i] !== ' ' && text[i] !== "123456789")
		{
			nText += text[i];
		}
	}

	std::cout << "number spaces: " << numbspace.length();
}

void printSpaces(const char *text,int numbtext)
{ 
	std::string numbspace;
	for (int i = 0; i < numbtext; ++i)
	{
		if (text[i] == ' ')
		{
			numbspace += text[i];
		}
	}

	std::cout<<"number spaces: " << numbspace.length();
}

void printValue(const char* text, int numbtext)
{

	std::string nspace;
	char arrvalue[]="0123456789";
	for (int i = 0 ; i<numbtext; ++i)
	{
		for (int ii = i + 1; ii < numbtext-; ++ii)
		{
			if (text[i] == arrvalue[ii])
			{
				nspace += arrvalue[ii];
			}
			
		}
	}
	std::cout << "number value: " << nspace.length();
	std::cout << std::endl;
	
	
}

int main()
{
	const int numbarr = 255;
	char text[numbarr];
	std::cout << "Enter your text: ";
	std::cin.getline(text,numbarr);
	std::cout << "your text: " << text;

	std::cout << std::endl;

	int numbtext = strlen(text);

	std::cout << "Charaster : " << numbtext << std::endl;

	printSpaces(text,numbtext);

	std::cout << std::endl;

	printValue(text,numbtext);




	return 0;
}