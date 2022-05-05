#include <iostream>

/*
class test
{
private: 
	int a;
public:
	test(int aA) :a(aA) {}
	
	friend test operator-(const test& b, const test& c);
	
	int getA()
	{
		return a;
	}

};

test operator-(const test& b, const test& c)
{
	return b.a - c.a;
}

int main()
{
	test d(2022);
	test e(30);
	int g(1991);

	test f = d - g;

	std::cout << f.getA();



	return 0;
}
*/

class Fraction
{
private:
	int a;
	int b;
public:
	Fraction(int aA, int bB) : a(aA), b(bB) {}
	void print()
	{
		std::cout << a << "/" << b << std::endl;
	}


};

int main()
{
	Fraction f1(1, 2);
	f1.print();

	Fraction f2(2022, 1991);
	f2.print();
	return 0;
}