//запись в файл 
/*
#include <iostream> работа с консолью
#include <string> работа с строками
#include <fstream> работа с файлами запись чтение

int main()
{
	std::ofstream file; создаем обьект класа ф стрим для Записи В ФАЙЛ
	file.open("name.txt",std::fstream::app); у обьекта класса вызываем метод опен создание . с параметрами называнимем файла и добавлением новых строк

	for (int i = 0; i < 7; ++i) цикл для добавления имен по порядку 
	{
		std::string n; переменная будет хранить имена
		std::cout << "Enter you name: "; запрос ввести имя
		std::cin >> n; вывод консоли для ввода имени

		file << n << std::endl; сохранение имени в файл Записываем В ФАЙЛ

	}

	file.close(); закрытие соеденения с файлом
	return 0;
}
*/

//поСИМВОЛЬНОЕ считывание
/*
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream ifile;

	ifile.open("name.txt", std::fstream::app);

	if (!ifile.is_open())
	{
		std::cout << "File not found! ";
	}
	else
	{
		std::cout << "File find and open! ";
	}

	char ch;
	while (ifile.get(ch)) метод ГЕТ считывает только ПО СИМОВЛЬНО ПО ЧАРОВО
	{
		std::cout << ch;
	}

	ifile.close();

	return 0;
}

*/

//поСТРОКОВОЕ считывание
/*
#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::ifstream ifile;
	
	std::string nf = "name.txt";

	ifile.open(nf);

	if (!ifile.is_open())
	{
		std::cout << "not find file " << nf << std::endl;
	}
	else
	{
		std::cout << "file " << nf << " find sucefful and open !" << std::endl;
	}

	std::string str;

	while (!ifile.eof())
	{
		str = "";
		getline(ifile, str);
		std::cout << str<<std::endl;
	}

	ifile.close();

	return 0;
}
*/

//Запись и Считывание ОБЬЕКТА классa
/*
#include <iostream>
#include <string>
#include <fstream>

class player
{
public:
	std::string name;
	int level;
	double score;

	player() { name = ""; level = 0; score = 0; }
	player(std::string n, int l, double s) :name(n), level(l), score(s) {}

	void print() { std::cout <<name <<" "<< level << " " << score << std::endl; }
};

int main()
{
	std::string fname = "gamer.txt";

	
	player player1("Mokail",200,2048);
	//добавление файлй или в файл
	/*
	std::ofstream file;

	file.open(fname, std::ofstream::app);

	if (!file.is_open())
	{
		std::cout << " Not Find File! ";
	}
	else
	{
		std::cout << "completed file open! ";
	}

	file.write((char*)&player1, sizeof(player));

	file.close();
	
	//добавление файлй или в файл


	std::ifstream ifile;

	ifile.open(fname);

	if (!ifile.is_open())
	{
		std::cout << "not open! ";
	}
	else
	{
		std::cout << "open!" << std::endl;
	}

	player plr;

	while (ifile.read((char*)&player1, sizeof(player)))
	{
		plr.print();
	}
	

	ifile.close();

	return 0;
}
*/
//Запись и Считывание ОБЬЕКТА класса

#include <iostream>
#include <string>
#include <fstream>
#include <clocale>
#include <windows.h>

int main()
{
	setlocale(LC_CTYPE, "rus");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите имя файла : ";
	std::string fname;
	std::cin >> fname;
	std::cout << "Имя файла: " << fname;

	std::fstream file;
	file.open(fname, std::fstream::app);


	if (!file.is_open())
	{
		std::cout << "Error file not create/open! ";
	}
	else
	{
		std::cout << "Succeful, file create/open! ";

		std::string str;

		while (!file.eof())
		{
			str = "";
			getline(file, str);
			std::cout << str << std::endl;
		}

	}

	
	file.close();

	return 0;
}