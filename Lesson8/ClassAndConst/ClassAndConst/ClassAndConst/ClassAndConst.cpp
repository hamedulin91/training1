#include <iostream>

class test
{
	int a;
	int b;
	int c;
	int d;

public:
	test() :a(10), b(20), c(30), d(40) {}

	test(int aa, int bb,  int cc, int dd)
	{
		a = aa;
		b = bb;
		c = cc;
		d = dd;
	}

	int setA(int val)
	{
		a = val;
	}

	int getA()
	{
		return a;
	}

	int getB()
	{
		return b;
	}

	int getC()const;
};


int main()
{
	test A;
	std::cout << A.getA() << std::endl;

	test B(1991, 2022, 2017,2020);
	std::cout << B.getA()<<std::endl;

	const test C(2009,2012,2016,2021);
	std::cout<<C.getC();



	return 0;
}


int test::getC()const
{
	return c;
}