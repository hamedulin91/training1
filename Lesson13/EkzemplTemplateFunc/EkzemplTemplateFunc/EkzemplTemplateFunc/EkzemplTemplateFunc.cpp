#include <iostream>

/*
template <class T>

const T& max(const T& a, const T& b)
{
	return a + b;
}

class player
{
private:
	int level;
public:
	player(int l=0):level(l) {}

	int getLevel() { return level; }

	friend player operator+(const player& a, const player& b)
	{
		return a.level + b.level;
	}
};



int main()
{
	int i = max(1991, 30);
	std::cout << i << std::endl;

	double ii = max(2020.2, 2.5);
	std::cout << ii << std::endl;

	auto iii = max(10.10, 11.11);
	std::cout << iii << std::endl;
	

	player p1(1);
	player p2(80);

	player sum = max(p1,p2);

	std::cout << sum.getLevel();



	return 0;
}

*/

template <class J>
J average(J* arr, int lenght)
{
	J sum = 0;
	for (int i = 0; i < lenght; ++i)
	{
		sum += arr[i];
	}
	sum /= lenght;
	return sum;
}

int main()
{
	int arr[] = { 1991, 1999, 2009, 2012, 2013, 2017, 2020 };
	std::cout << average(arr, 7) << std::endl;

	double arr2[] = { 4.25, 5.37, 8.44, 9.25 };
	std::cout << average(arr2, 4) << "\n";

	return 0;
}