#include <iostream>

class Test
{
	static int a;
	
public:
	static int getA();
};

int Test::a = 1991;
int Test::getA() { return a++; }

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << Test::getA() << std::endl;
	}

	return 0;
}