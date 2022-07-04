#include <iostream>

// При компиляции программы все стейтменты , переменные, функции и тд преобразуются в машинный код. и каждой строчке
// машинного кода присваевется адрес в памяти.
// СВЯЗЫВАНИЕ это процесс который конвертирует каждый стэйтмент , переменную функцию и тд в адрес памяти 

//РАННЕЕ СВЯЗВАНИЕ

/*
void print(int val)
{
	std::cout << "Hello " << val << std::endl;
}

int main()
{
	int val = 1991;
	print(val); //это называется ПРЯМОЙ вызов функции . Выполняется с помошью  РАННЕГО связывания (Статическая привязка)
	// означает что линкер может связать имя идентификатора(функции , переменные) с машинным адресом.
	// поэтом когда линкер встречает вызов функции он заменяет его инструкцие машинного кода сообщающей процессору перейти к адресу функции


	return 0;
}
*/

//ПОЗДНЕЕ СВЯЗВАНИЕ или динапическая привязка
//Использвуется тогда когда нету возможности определить адрес функции сразу. 

int sum(int a, int b)
{
	return a + b;
}

int razn(int a, int b)
{
	return a - b;
}

int umn(int a, int b)
{
	return a * b;
}

int main()
{
	int a;
	std::cout << "Enter value a: ";
	std::cin >> a;

	int b;
	std::cout << " Enter value b: ";
	std::cin >> b;

	int op;
	do
	{
		std::cout << "Enter znak (0=sum, 1=razn, 2=umn): ";
		std::cin >> op;
	} while (op < 0 || op>2);

	int (*ptr)(int, int) = nullptr;

	switch (op)
	{
	case 0: ptr = sum; break;
	case 1: ptr = razn; break;
	case 2: ptr = umn; break;
	}

	std::cout << " Rezultat: " << ptr(a, b)<<std::endl;
}