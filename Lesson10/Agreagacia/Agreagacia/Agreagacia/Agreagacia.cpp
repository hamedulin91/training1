#include <iostream>
#include <string>

class Worker
{
private:
	std::string name;
public:
	Worker(std::string wname) : name(wname) {};

	std::string getname() { return name; }
};

class Job
{
private:
	Worker* name;
public:
	Job(Worker* name = nullptr) :name(name) {};


};


int main()
{
	Worker* Viktor = new Worker("Viktor");
	Worker* Mikle = new Worker("Mikle");
	Worker* Nikita = new Worker("Nikitra");

	{Job job(Viktor); }
	{Job job(Mikle); }
	{Job job(Nikita); }

	std::cout << Viktor->getname() << " now real Viktor \n";
	std::cout << Mikle->getname() << " now real Mikle \n";
	std::cout << Nikita->getname() << " now real Nikita \n ";

	delete Viktor;
	delete Mikle;
	delete Nikita;

	return 0;
}