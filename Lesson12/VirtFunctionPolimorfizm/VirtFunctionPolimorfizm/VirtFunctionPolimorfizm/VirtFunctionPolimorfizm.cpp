#include <iostream>

class parent
{
public:
	int pa = 1991;
	int* pb = &pa;
public:
	virtual int getA() { return *pb; }
};

class child:public parent
{
public:
	int ca = 2022;
	int* cb = &ca;
public:
	virtual int getA() override final { return *cb; }
};

int main()
{

	child Makar;
	std::cout << Makar.getA() << std::endl;

	parent& Viktor = Makar;
	std::cout << Viktor.getA() << std::endl;

	return 0;
}