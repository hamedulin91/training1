#include <iostream>

class test
{
private: 
	int x, y, z;
public:
	test(int xX = 0, int yY = 0, int zZ = 0) : x(xX), y(yY), z(zZ) {}


	friend std::ostream& operator<<(std::ostream& a, const test& b);

	void print()
	{
		std::cout << x << y << z;
	}
};

std::ostream& operator<<(std::ostream& a, const test& b)
{
	a << b.x << b.y << b.z;
	return a;
}


int main()
{
	test coord;
	test coord(1991, 2013.2022);
	
	std::cout << "Hello" << coord << "goodby"<<coord;


	return 0;
}