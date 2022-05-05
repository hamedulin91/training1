#include <iostream>


class test
{
	int* a;
	int sa;

public:
	test(int val)
	{
		std::cout << "Вызвался конструктор " << this << std::endl;
		sa = val;
		a = new int[val];
		for (int i = 0; i < val; ++i)
		{
			a[i] = i;
		}
	}

	test(const test& b)
	{
		std::cout << "Вызвался конструктор копирования: "<<this << std::endl;

		this->a = new int [b.sa];
		this->sa = b.sa;

		for (int ii = 0; ii < b.sa; ++ii)
		{
			this->a[ii] = b.a[ii];
		}
	}

	~test()
	{
		std::cout << "Вызвался деструктор " << this << std::endl;
		delete [] a;
	}

	void print()
	{
		for(int ii=0; ii<sa; ++ii)
		{
			std::cout << a[ii];
		}

		std::cout << std::endl;
	}

};

int main()
{
	setlocale(0, "");

	test obj(5);
	obj.print();

	std::cout << std::endl;

	test ob(obj);
	ob.print();


	return 0;
}