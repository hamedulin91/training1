#include <iostream>
/*
template<class T>

class player
{
private:
	T value;
public:
	player(T v=0) :value (v) {}
	~player() {}

	void print() { std::cout << value << std::endl; }
};

template<>
void player<double>::print()
{
	std::cout << std::scientific << value << '\n';
}


int main()
{
	player<int> level (80);
	level.print();

	player<double> score(8000.50);
	score.print();

	return 0;
}
*/

template <class T>
class player
{
private:
	T val;
public:
	player(T v=0):val(v) {}
	~player() {}

	void print() { std::cout << val << "\n"; }
};

template<>
void player<double>::print()
{
	std::cout << std::scientific << val << "\n";
}

template<>
player<char*>::player(char* va)
{
	int lenght = 0;
	while (val[lenght] != '\n')
		++lenght;
	++lenght;

	va = new char[lenght];

	for (int i = 0; i < lenght; ++i)
	{
		val[i] = va[i];
	}
}

int main()
{
	//динам выделяем временную строку. Т,Е обтвялем указатель с именем СТ . Он указывает на динамическую область памяти типа ЧАР символ массив размереом 20 символов
	char* st = new char[20];

	std::cout << "Enter name: "; // выводим сообщение с просьбой ввести имя
	std::cin >> st; //вызываем для пользовтяля пользовательский ввод данных в переменную СТ 

	player<char*> pl(st); // создаем обьект ПЛ по шаблону класса плэйер, с типом данных указателя ЧАР со значением в виде переменной СТ 
	//Сохранили в этот обьект данные которые ввел пользователь 
	//При создании экземлпяра шаблона с передвавемым значенем указателя на динамическую память 
	// то происходит поверхностное копирвоание конструкторов ТАКИМ образом указатели обоих конструкторов указывают
	// на одну и туже область памяти . и при ЕЕ ОЧИСТКЕ там ничего не остается

	delete[] st; //Удаляем динамически выделенное место в памяти под СТ

	pl.print();



	return 0;
}