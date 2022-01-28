#include <iostream>
#include <string>
#include <windows.h>

//Задание1
void calculate(int x,int y,char z)
{
	switch (z)
	{
		case '+':
			std::cout<<x+y<<std::endl;
		break;
		
		case '-':
			std::cout<<x-y<<std::endl;
		break;
		
		case '*':
			std::cout<<x*y<<std::endl;
		break;
		
		case '/':
			std::cout<<x/y<<std::endl;
		break;
		
		case '%':
			std::cout<<x%y<<std::endl;
		break;
		
		default:
			std::cout<<"Несуществующий оператор"<<std::endl;
	}
}

int enterValue (int a)
{
	std::cin>>a;
	return a;
}

char enterChar (char b)
{
	std::cin>>b;
	return b;
}



//Задание2
enum class Animal
{
	cat, dog, pig, sparrow, chicken,
};

std::string getNameString(Animal type)
{
	switch (type) 
	{
		case Animal::cat:
			return "cat";
		break;

		case Animal::dog:
			return "dog";
		break;

		case Animal::pig:
			return "pig";
		break;

		case Animal::sparrow:
			return "sparrow";
		break;

		case Animal::chicken:
			return "chicken";
		break;

		default:
			std::cout<<"Нету такого животного"<<std::endl;
	}
}

void printLegAnimal ()
{
	Animal pig {Animal::pig};
	Animal sparrow {Animal::sparrow};
	switch (pig)
	{
		case Animal::pig:
			std::cout<<getNameString(pig)<<" Имеет 4 ноги"<<std::endl;
		
		case Animal::sparrow:
			std::cout<<getNameString(sparrow)<<" Имеет 2 ноги"<<std::endl;
		break;
		
		default:
			std::cout<<"Нету таких животных"<<std::endl;
	}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
//Задание1
	int a;
	std::cout<<"Введите первое число: ";
	int a1 = enterValue(a);
	
	int b;
	std::cout<<"Введите второе число: ";
	int b1 = enterValue(b);
	
	char c;
	std::cout<<"Введите один из операторов + - /  %: ";
	int c1 = enterChar(c);
	
	calculate(a1, b1, c1);


//Задание2
	printLegAnimal();

	
	return 0;
}