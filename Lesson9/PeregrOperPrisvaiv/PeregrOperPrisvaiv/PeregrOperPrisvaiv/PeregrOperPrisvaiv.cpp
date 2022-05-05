#include <iostream>

class test
{
	int* a;
	int sa;
public:
	test(int val)
	{
		std::cout << "�������� ����������: " <<this<< std::endl;
		sa = val;
		a = new int[sa];

		for (int i = 0; i < sa; ++i)
		{
			a[i] = i;
		}
	}

	test(const test& b)
	{
		std::cout << "�������� ����������� ����������� : " << this << std::endl;
 
		this->a = new int[b.sa];

		this->sa = b.sa;

		for (int ii = 0; ii < this->sa; ++ii)
		{
			this->a[ii] = b.a[ii];
		}



	}

	test & operator = (const test &c) 
	{
		std::cout << "���������� ��������� = " << this << std::endl;

		this->sa = c.sa;

		if (this->a != nullptr)
		{
			delete []this->a;
		}

		this->a = new int[c.sa];

		for (int iii = 0; iii < c.sa; ++iii)
		{
			this->a[iii] = c.a[iii];
		}

		return *this;
	}

	~test()
	{
		std::cout << "�������� ����������: " << this << std::endl;
		delete[]a;
	}

};

int main()
{
	setlocale(LC_ALL , "Russian");

	test a(5);
	
	test a1(a);

	test b(10);

	a = b;

	test c(2);
	c = a = b;

	return 0;
}