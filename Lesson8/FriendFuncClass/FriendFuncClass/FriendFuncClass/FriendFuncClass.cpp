#include <iostream>
#include <string>

//Дружественные функции
/*
class Test
{
	int a;
public:
	Test() :a(1991) {}
	void add(int val) { a += val; }

	int getA()
	{
		return a;
	}

	friend void reset(Test& t);

};

void reset(Test& t)
{
	t.a = 1991;
}

int main()
{
	Test v;
	std::cout << v.getA()<<std::endl;

	v.add(30);

	std::cout << v.getA()<<std::endl;

	reset(v);
	std::cout << v.getA() << std::endl;

	return 0;
}
*/
//Дружественные функции

//Дружественные классы
/*
class Test1
{
	int a;
public:
	Test1() :a(30) {}

	void add(int val) { a += val; }

	int getA() { return a; }

	friend class Test2;
};

class Test2
{
	int b;
public:
	Test2() :b(2022) {}

	void del(int v) { b -= v; }

	void input(Test1& t)
	{
		std::cout << t.a << std::endl;
		std::cout << t.getA() << std::endl;
		std::cout << b << std::endl;
	}
};

int main()
{
	Test1 a;
	Test2 b;

	b.input(a);
}
*/
//Дружественные классы

//метод вне класса
/*
class apple
{
	int weight;
	std::string color;
public:
	apple() :weight(5), color("Red") {}

	void inputapple();
};

void apple::inputapple()
{
		std::cout << weight << " " << color << std::endl;
}


int main()
{
	apple reda;

	reda.inputapple();


	return 0;
}
*/
//метод вне класса

//Дружественный метод
/*
class apple;

class human
{
public:
	void take(apple& a);
};


class apple
{
	int weight;
	std::string color;
public:
	apple() :weight(150), color("green") {}

	friend void human::take(apple& a);

};

void human::take(apple& a)
{
	std::cout << a.color << " " << a.weight << std::endl;
}





int main()
{
	human viktor;
	apple aplered;

	viktor.take(aplered);
	

	return 0;
}
*/
//Дружественный метод

//Задание

class Point3D;

class Vector3D
{
	double vx, vy, vz;
public:
	Vector3D(double x = 0.0 , double y = 0.0, double z = 0.0) :vx(x), vy(y), vz(z) {}

	void inputVector() { std::cout << vx << vy << vz<<std::endl; }

	// friend class Point3D;

	};

class Point3D
{
	double px, py, pz;
public:
	Point3D(double x = 0.0, double y = 0.0, double z = 0.0) :px(x), py(y), pz(z) {}

	void inputPoint() { std::cout << px << py << pz<<std::endl; }

	void moveByVector(const Vector3D& v)
	{
		px += v.vx;
		py += v.vy;
		px += v.vz;
	}
};


int main()
{
	Point3D p(3.0,4.0,5.0);
	Vector3D v(3.0,3.0,-2.0);

	p.inputPoint();
	p.moveByVector(v);
	p.inputPoint();
	

	return 0;
}

//Задание