#include <iostream>

class test
{
	int a;

public:
	test(int val)
	{
		a = val;
	}

	int getA() const
	{
		return a;
	}
};



test operator+ (test const& a, test const& b)
{
	test sum = a.getA()+b.getA();
	return sum;
}


int main()
{
	test a(1991);
	test b(30);

	test sum(a + b);

	std::cout << sum.getA();




	return 0;
}