#include <iostream>
#include <string>

class User
{
	std::string name;
	std::string race;
	int level;
	int age;

public:
	/*User()
	{
		name = "VIktor";
		race = "Ork";
		level = 80;
		age = 30;
	}
	*/

	User(std::string n, std::string r, int l, int a)
	{
		name = n;
		race = r;
		level = l;
		age = a;
	}

	std::string getName() { return name; }
	std::string getRace() { return race; }
	int			getLevel() { return level; }
	int			getAge() { return age; }

};

int main()
{
	User Viktor{"Mikle","Goblin",100,200};
	std::cout << Viktor.getName()<<"\n"<< Viktor.getRace()<<"\n"<< Viktor.getLevel()<<"\n"<< Viktor.getAge();


	return 0;
}