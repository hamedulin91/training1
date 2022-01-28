#include <iostream>
#include <cassert>

class Date //по умолачиню класс являтеся закрытым. ДОСТУП К ДАННЫМ ИММЕЕЕТ ТОЛЬКО ДРУГИЕ ЧЛЕНЫ ЭТОГОЖЕ КЛАССА
{

	int d_day;
	int d_mouth;
	int d_year;

public:
	void printHB(int a,int b,int c)
	{
		d_day = a;
		d_mouth = b;
		d_year = c;
		std::cout << "HeppyBerthday " << d_day << " " << d_mouth << " " << d_year << " ";
	}
};


class Numbers
{
	double m_a, m_b, m_c;

public:
	void setValues(double a, double b, double c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}

	void pirnt()
	{
		std::cout << "<" << m_a << " " << m_b << " " << m_c<<">";
	}

	bool isEqual(const Numbers& b)
	{
		return (m_a == b.m_a && m_b == b.m_b && m_c == b.m_c);
	}
		
};

class Stack
{
	int array[10];
	int lenghtStack;

public:
	void reset()
	{
		lenghtStack = 0;
		for (int i = 0; i < 10; ++i)
		{
			array[i] = 0;
		}
	}

	bool push(int value)
	{

		if (lenghtStack == 10)
		{
			return false;
		}

		array[lenghtStack++] = value;
		return true;
	}

	bool pop()
	{
		assert(lenghtStack > 0);
		return array[--lenghtStack];
	}

	void print() 
	{
		std::cout << "( ";
		for (int i=0;i<lenghtStack;++i)
		{
			std::cout << array[i]<<" ";
		}
		std::cout << " )\n";
	}

};

int main()
{
	Date HappyBertchday;
	HappyBertchday.printHB(10,11,1991);
	//HappyBertchday.d_day = 10; недоступно т.к закрытый класс

	Numbers point;
	point.setValues(3.0,4.0,5.0);
	point.pirnt();

	Numbers point1;
	point1.setValues(3.0, 4.0, 5.0);

	Numbers point3;
	point3.setValues(6.0, 5.0, 4.0);

	if (point.isEqual(point1))
		std::cout << "Equal";
	else
		std::cout << "Not Equal";

	std::cout << "\n";

	if (point.isEqual(point3))
		std::cout << "=";
	else
		std::cout << "!=";

	std::cout << "\n";

	Stack stack;
	stack.reset();
	stack.print();
	stack.push(1);
	stack.print();
	stack.push(2);
	stack.print();
	stack.push(3);
	stack.print();

	stack.pop();
	stack.print();
	return 0;
}