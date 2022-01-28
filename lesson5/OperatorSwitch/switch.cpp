#include <iostream>
#include <string>
#include <windows.h>

//�������1
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
			std::cout<<"�������������� ��������"<<std::endl;
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



//�������2
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
			std::cout<<"���� ������ ���������"<<std::endl;
	}
}

void printLegAnimal ()
{
	Animal pig {Animal::pig};
	Animal sparrow {Animal::sparrow};
	switch (pig)
	{
		case Animal::pig:
			std::cout<<getNameString(pig)<<" ����� 4 ����"<<std::endl;
		
		case Animal::sparrow:
			std::cout<<getNameString(sparrow)<<" ����� 2 ����"<<std::endl;
		break;
		
		default:
			std::cout<<"���� ����� ��������"<<std::endl;
	}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
//�������1
	int a;
	std::cout<<"������� ������ �����: ";
	int a1 = enterValue(a);
	
	int b;
	std::cout<<"������� ������ �����: ";
	int b1 = enterValue(b);
	
	char c;
	std::cout<<"������� ���� �� ���������� + - /  %: ";
	int c1 = enterChar(c);
	
	calculate(a1, b1, c1);


//�������2
	printLegAnimal();

	
	return 0;
}