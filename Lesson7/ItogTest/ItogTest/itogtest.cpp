#include <iostream>

int indval()
{

}

int main()
{
	int a[]{ 1,2,3,4,5,6,7,8,9,10 };
	int arra{sizeof(a)/sizeof(a[0])};

	int x;
	std::cout << "Enter value a: ";
	std::cin >> x;

	int ind = indval();

	return 0;
}