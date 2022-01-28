#include <iostream>

class i
{
	int a = 2020;

public: 
	int geti() { return a; }
};

class array
{
	int arr[10];

public:
	void arra(int ind, int val)
	{

		if (ind < 0 || ind >= 10)
		{
			return;
		}
		arr[ind] = val;

		std::cout << arr[ind];
	}
};

int main()
{
	array arr1;
	int a = 3;
	int b = 1991;
	arr1.arra(a, b);

	std::cout << std::endl;

	

	return 0;
}