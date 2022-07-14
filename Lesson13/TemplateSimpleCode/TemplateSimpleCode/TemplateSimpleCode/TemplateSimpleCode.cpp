#include <iostream>
#include <string>


//обычный шаблон и шаблон с несколькими парамтерами Т1 Т2 Т3 и тд
/*
template <class T, class T1, class T2>
class player
{
private:
	T val;
	T1 val1;
	T2 val2;
public:
	player(T v, T1 v1, T2 v2):val(v), val1(v1), val2(v2) {}

	player() 
	{
		val = 0;
		val1 = 0;
		val2 = 0;
	}

	T getVal() { return val; }

	void print() { std::cout << val<<'\n' << val1 <<'\n' << val2 << std::endl; }
};

*/

//Шаблон класса с шаблоном класса наследника
/*
template <class T>
class player
{
protected:
	T val;
public:
	player(T v):val(v) {}
	player()
	{
		val = 0;
	}

	T getVal() { return val; }

	void print() { std::cout << val << std::endl; }
};

template<class T>
class antiplayer : public player<T>
{
public:
	antiplayer(T v):player<T>(v) {}

	void showtypename()
	{
		std::cout << typeid(val).name() << std::endl;
	}
};  

*/

//специализация шаблона метода. то есть мы можем указать отдельный способ выполнения метода вне тела основго шаблонного класса
/*
template<class T>
class player
{
public:
	void print(T val) { std::cout << val << std::endl; }
};

template<>
class player <std::string>
{
public:
	void print(std::string v) { std::cout << "____" << v << "-------" << std::endl; }
};
*/

int main()
{
	//обычный шаблон
	/*
	player<int> level;
	level=80;

	player<double> score;
	score = 8000.80;

	player<std::string> name("Viktor");

	name.print();
	level.print();
	score.print();
	*/

	//шаблон с несколькими параметрами Т1 Т2 Т3 итд
	/*
	player<std::string, int, double> Viktor("Viktor",80,800.8);
	Viktor.print();
	*/

	//использование класса наследника с шаблоном
	/*
	player<std::string> name("Viktor");
	name.print();

	antiplayer<std::string> namea("Mikhail");
	namea.print();
	namea.showtypename(); 
	*/

	//специализация шаблона метода. то есть мы можем указать отдельный способ выполнения метода вне тела основго шаблонного класс
	/*
	player<std::string> h;
	h.print("Hello world");
	*/

	return 0;
}