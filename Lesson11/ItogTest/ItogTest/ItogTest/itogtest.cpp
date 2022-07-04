#include <iostream>
#include <string>

class creature //родительский класс Существо 
{
protected:
	std::string name; //имя
	char ch; //симовл
	int hp; //Количество жизни
	int damage; //Урон
	int gold; //Золото
public:
	creature(std::string n, char c, int h, int d, int g) :name(n), ch(c), hp(h), damage(d), gold(g) {} //конструктор

	//геттеры членов
	std::string getName() { return name; } 
	int getCh()	{ return ch;	}
	int getHp()	{ return hp;	}
	int getDamage(){ return damage;}
	int getGold()	{ return gold;	}

	//методы
	void redicehp(int r)
	{
		hp -= r;
	} //уменьшает здоровье на указанное количество
	
	bool idDead()
	{} //указывает на жизнь/смерть
	
	
	void addGold(int g)
	{
		gold += g;
	} //добавляет золото


};

class player : public creature
{
private:
	int p_level=1;
public:

	player(std::string name) :creature(name, '@', 10, 1, 0) {}
	
		void levelUp() 
		{
			++p_level;
			++damage;
		}

	int getlevel() { return p_level; }

	bool hasWon()
	{
		if (p_level >= 20) { return true; }
	}

};


class monster : public creature
{
public:

	enum type {dragon, orc, slime, MAX_TYPES};

	struct monsterdata
	{
		const char* name; char symbol; int healtch; int damage; int gold;
	};

	static monsterdata monsterData[MAX_TYPES];

	monster(type type)
		:creature(monsterData[type].name, monsterData[type].symbol, monsterData[type].healtch, monsterData[type].damage, monsterData[type].gold)
	{}

};

monster::monsterdata monster::monsterData[monster::MAX_TYPES]
{
	{"dragon", 'D', 20, 4, 100},
	{"orc", 'o', 4, 2, 25},
	{"slime", 's', 1, 1, 10},
};

int main()
{
	creature o("orc", 'o', 4, 2, 10);
	o.addGold(5);
	o.redicehp(1);
	std::cout << " The " << o.getName() << " has " << o.getHp() << " health and is carrying " << o.getGold() << " gold. \n";

	std::cout << " Enter name: ";
	std::string PlayerName;
	std::cin >> PlayerName;

	player p(PlayerName);
	std::cout<< "Welcome, " << p.getName() << ".\n";

	std::cout << "You have " << p.getHp() << " health and are carrying " << p.getGold() << " gold.\n";

	monster m(monster::orc);
	std::cout << "A " << m.getName() << " (" << m.getCh() << ") was created.\n";


	return 0;
}