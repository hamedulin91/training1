#include <iostream>
#include <string>

int sumTo(int a);

struct Animal
{
	std::string name;
};

void printAnimalName(Animal& name);



int main()
{
	int a;
	std::cout << "Enter value: ";
	std::cin >> a;

	std::cout << "\n";

	std::cout << "Sum to 1 do " << a << ": " << sumTo(a);

	std::cout << "\n";

	Animal name;
	name.name = "sparrow";
	printAnimalName(name);

	return 0;
}

int sumTo(int a)
{
	int b = 0;
	for (int i=0;i<=a;i++)
	{
		b += i;
	}
	return b;
}

void printAnimalName(Animal &name)
{
	std::cout << name.name;
}