#include <iostream>

class test
{
private:
	int a;
public:
	test(int aA = 0):a(aA) {}

	test operator+ (int c);

	int getA()
	{
		return a;
	}
};

test test::operator+(int c)
{
	return test(a + c);
}

int main()
{
	test one(1991);
	int year(30);

	test two = one + year;

	std::cout << two.getA();

	return 0;
}