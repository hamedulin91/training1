#include <iostream>

class test
{
	int a;

public:
	test();

	test& add(int val);
	test& del(int val);
	test& ymnoj(int val);

	int getVal()
	{
		return a;
	}
};


int main()
{


	return 0;
}

test::test():a(0) {}

test& test::add(int val) { a += val; return *this; }

test& test::del(int val) { a -= val; return *this; }

test& test::ymnoj(int val) { a *= val; return *this; }
