#include <iostream>
#include <cassert>
#include <string>

class Human
{
public:
	std::string name;
	int age;
	Human(std::string Nname = "", int Aage = 0) :name(Nname), age(Aage) { std::cout << "Human \n"; }
	std::string getName() { return name; }
	int getAge() { return age; }

};

class player : public Human
{
public:
	int level;
	int score;
	player(int Llevel = 0, int Sscore = 0) :level(Llevel), score(Sscore) { std::cout << "player \n"; }
	int getLevel() { return level; }
	int getScore() { return score; }
};

class basketboll : public player
{
public:
	int numberofplayer;
	std::string teamname;
	basketboll(int nop = 0, std::string tm = "") :numberofplayer(nop), teamname(tm) { std::cout << " basketboll \n"; }
	int getNOP() { return numberofplayer; }
	std::string getTeamname() { return teamname; }
};


int main()
{
	player Viktor;
	Viktor.name = "Viktor";
	Viktor.age = 30;
	Viktor.level = 80;
	Viktor.score = 800;

	std::cout << Viktor.getName();

	basketboll BeepTeam;
	BeepTeam.name = "Mikle";


	return 0;
}