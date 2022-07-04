#include <iostream>

template<class T>
class player
{
private:
	T level;
public:
	player(T l) :level(l) {}

	void TypeSize()
	{
		std::cout << sizeof(level) << std::endl;
	}
};

template<class T>
class playerinfo:public player<T>
{
public:
	playerinfo(T l):player<T>(l) {}
};

int main()
{
	double a = 11.11;

	playerinfo <double> Viktor(a);

	Viktor.TypeSize();

}