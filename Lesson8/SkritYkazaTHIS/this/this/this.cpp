#include <iostream>

class test
{
	int a;

public:
	test():a(0) {}

	test& add(int val) { a += val; return *this; }

	test& del(int val) { a -= val; return *this; }

	test& umnoj(int val) { a *= val; return *this; }

	int getTest() 
	{
		return a;
	}

};

int main()
{
	test b;
	b.add(2022).del(1991).umnoj(1);

	std::cout << b.getTest();

	return 0;
}