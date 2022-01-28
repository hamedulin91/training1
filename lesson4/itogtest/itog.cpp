#include <iostream>
#include <windows.h>
#include <string>

enum class race 
{
	ogre, ork, human, unded, alf,
};

std::string SetRaceName (race type)
{
	if (type == race::ogre)
		return "���";
	if (type == race::ork)
		return "��� ";
	if (type == race::human)
		return "������� ";
	if (type == race::unded)
		return "������ ";
	if (type == race::alf)
		return "���� ";
	else 
		return "������������";
}



struct user {
	std::string name;
	std::string Race;
	int hp;
};

void PrintUser (user User)
{
	std::cout<<User.Race<<" �� ����� "<<User.name<<" ��������� ���� ������������ ��  "<<User.hp<<" ��������� "<<std::endl;
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	race raceuser{race::ogre};
	std::string racename=SetRaceName(raceuser);
	
	user User1 {"Viktor", racename, 100};
	PrintUser (User1);
	
	
	race raceuser2{race::ork};
	std::string racename2=SetRaceName(raceuser2);
	
	user User2 {"Mikhail", racename2, 200};
	PrintUser (User2);
	
	
	race raceuser3{race::unded};
	std::string racename3=SetRaceName(raceuser3);
	
	user User3 {"Nikita", racename3, 400};
	PrintUser (User3);
	
	
	
	return 0;
}