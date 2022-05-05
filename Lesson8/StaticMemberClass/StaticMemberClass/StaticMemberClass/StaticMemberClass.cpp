#include <iostream>

class test
{
	static int a;

public:
	
	int getA()
	{
		return a;
	}

};

int test::a = 5;

int main()
{
	test::a = 10;


	return 0;
}