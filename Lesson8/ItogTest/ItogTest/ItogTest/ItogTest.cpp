#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>


//Первое задание
/*
class Point
{
	double m_a , m_b;
public:
	Point(double a = 0.0, double b = 0.0) :m_a(a), m_b(b) {}

	void print()
	{
		std::cout<<" Point: " << m_a<<" "<< m_b<<std::endl;
	}

	
	double distanceTo(const Point &a)
	{
		return sqrt((m_a - a.m_a)*(m_a - a.m_a)+(m_b - a.m_b)*(m_b-a.m_b));
	}
	

	friend double distanceFrom(Point &a, Point &b);
};

double distanceFrom(Point& a, Point& b)
{
	return sqrt((a.m_a - b.m_a) * (a.m_a - b.m_a) + (a.m_b - b.m_b) * (a.m_b - b.m_b));
}

int main()
{
	Point first;
	Point second(2.0, 5.0);

	first.print();
	second.print();

	//std::cout<<"Distance between two points: "<<first.distanceTo(second);

	std::cout << "Distance between two points: " << distanceFrom(first, second);


	return 0;
}*/
//Первое задание

//Второе задание
/*
class Welcome
{
	char* m_data;

public:
	Welcome()
	{
		m_data = new char[14];
		const char* init = "Hello world";
		for (int i = 0; i < 14; ++i)
		{
			m_data[i] = init[i];
		}
	}

	~Welcome()
	{
		delete[] m_data;
	}

	void print() const
	{
		std::cout << m_data;
	}

};

int main()
{
	Welcome a;
	a.print();


	return 0;
}
*/
//Второе задание

//Задание 3

class Monster
{
public:
	enum class  MonsterType
	{
		Dragon, Goblin, Ogre, Orc, Skeleton, Troll, Vampire, Zombie, MAX_MONSTER_TYPES
	};

private:
	MonsterType type;
	std::string name;
	int hp;

public:
	Monster(MonsterType t, std::string n, int healtch):type(t),name(n),hp(healtch) {}

	std::string getTypeString() const
	{
		switch (type)
		{
		case (MonsterType::Dragon):		return "Dragon";	break;
		case (MonsterType::Goblin):		return "Goblin";	break;
		case (MonsterType::Ogre):		return "Ogre";		break;
		case (MonsterType::Orc):		return "Orc";		break;
		case (MonsterType::Skeleton):	return "Skeleton";	break;
		case (MonsterType::Troll):		return "Troll";		break;
		case (MonsterType::Vampire):	return "Vampire";	break;
		case (MonsterType::Zombie):		return "Zombie";	break;
		default: "Unknown";
		}	


	}

	void print () const
	{
		std::cout << name << " " << getTypeString() << " " << hp << std::endl;
	}

};

class MonsterGenerator
{
	public:

		static int getRandNum(int min, int max)
		{
			static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
			return static_cast<int>(rand() * fraction * (max - min + 1) + min);
		}
		
	static Monster genetateMonster()
	{

		static const double fm = 1.0 / (static_cast<double>(Monster::MonsterType::MAX_MONSTER_TYPES) + 1.0);
		
		
		return Monster(Monster::MonsterType::Orc, "Jack", 90);
	}
};





int main()
{
	srand(static_cast<unsigned int>(time(0))); //функция которая устанавливает в качестве стартового значения то что в вскобках. вызывается в самом начале программы
	//Функция time возвращает в качестве времени цлеочисленное общее количество секунд от полуночи 1 января 1970г

	rand(); //функция которая генерирует следующее случайное число в последовательности в диапозоне от 0 до RAND_MAX(константа в библиотеке 32767)


	Monster m = MonsterGenerator::genetateMonster();
	m.print();
}

//Задание 3