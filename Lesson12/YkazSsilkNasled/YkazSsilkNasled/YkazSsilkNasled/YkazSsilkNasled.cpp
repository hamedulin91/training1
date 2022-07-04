// Указатели, ссылки в дочерних классах
/*
#include <iostream>
#include <string>

class parent
{
protected:
	int val;
public:
	parent(int v) :val(v) {}

	const char* getName() { return "Parent"; }
	int getVal() { return val; }
};

class child : public parent
{
public:
	child(int va) :parent(va) {}

	const char* getName() { return "Child"; }
	int getValDoubl() { return val * 2; }
};

int main()
{
	child ch(7); //обьявлем и инициализируем переменную типа чилд и передаем значение в функцию
	std::cout << " child is a " << ch.getName() << " and has value " << ch.getVal() << "\n";

	child& rch = ch; //делаем ссылку на переменную
	std::cout << "rChild is a " << rch.getName() << " and has value " << rch.getVal() << "\n";

	child* ych = &ch; //реализуем указатель на адрес памяти где хранится инициализировання переменная
	std::cout << " yChild is a " << ych->getName() << " and has value " << ych->getVal() << "\n";


	parent& rpar = ch; //т.к Чилдрен это наследник Парента. то Парент может ССЫЛАТСЯ на переменную Чилдрена 
	parent* ypar = &ch; // т.к Чилдрен это наследник Парента то Парент может УКАЗЫВАТЬ на адрес где находится переменная Чилдрена

	std::cout << " rChild is a " << rpar.getName() << " and has value " << rpar.getVal() << "\n";

	std::cout << " ypar is a " << ypar->getName() << " and has value " << ypar->getVal() << "\n";

	return 0;
}

*/

// Указатели, ссылки в родительских классах
#include <iostream>
#include <string>

class animal
{
protected:
	std::string a_name;

	animal(std::string name):a_name(name) {}

public:
	std::string getName() { return a_name; }
	const char* speak() { return "???"; }
};

class cat : public animal
{
public:
	cat(std::string name):animal(name) {}
	const char* speak() { return "meow"; }
};

class dog : public animal
{
public:
	dog(std::string name) :animal(name) {}
	const char* speak() { return "gaw"; }
};

void report(animal& ranimal)
{
	std::cout << ranimal.getName() << ranimal.speak()<<"\n";
}

int main()
{
	cat cats[] = { cat{"simon"}, cat{"tomas"}, cat {"shish"}, cat{"dimka"} };
	dog dogs[] = { dog{"pushok"}, dog{"serik"}, dog{"rijik"}, dog{"palma"} };



	for (int i = 0; i <= 3; ++i)
	{
		std::cout << cats[i].getName() << " " << cats[i].speak() << "\n";
	}

	for (int ii = 0; ii <= 3; ++ii)
	{
		std::cout << dogs[ii].getName() << " " << dogs[ii].speak() << "\n";
	}

	return 0;
}

// УКАЗАТКЕЛИ ИЛИ ССЫЛКИ РОДИТЕЛЬСКОГО КЛАССА ВЫЗЫВАЮТ ТОЛЬКО РОДИТЕЛСК, ВЕРСИЮ ФУНКЦИИ . ДОЧЕРНЮЮ НЕЕЕ ВЫЗЫВАЕТ НИКАК. ДЯ ЭТОГО НУЖН ВИРТУАЛЬНЫЕ ФУНКЦИИ