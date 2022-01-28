#include <iostream>
#include <windows.h>
#include <string>

struct Human 
{
	std::string name;
	std::string sername;
	int age;
	double weight;
	double height;
	std::string job;
};

Human GetParamUser()
{
	Human user {"Имя","Фамилия",0,0,0,"Работа"};
	return user;
}

void printUser (Human user)
{
	std::cout<<user.name<<std::endl;
	std::cout<<user.sername<<std::endl;
	std::cout<<user.age<<std::endl;
	std::cout<<user.weight<<std::endl;
	std::cout<<user.height<<std::endl;
	std::cout<<user.job<<std::endl;
}

struct Kvartira
{
	Human Vladelec;
	int number;
	double t1;
	double t2;
	double gaz;
	double hvs;
};

Kvartira GetParamKvartira()
{
	Kvartira kv132 {{"Виктор","Хамедулин",29,70,179,"ТеплоЭнергоСервис"},132,23.3,433.2,2432.3,412.3};
	return kv132;
}

void printParamKvartira (Kvartira Kv132)
{
	std::cout<<Kv132.Vladelec.name<<std::endl;
	std::cout<<Kv132.Vladelec.sername<<std::endl;
	std::cout<<Kv132.Vladelec.age<<std::endl;
	std::cout<<Kv132.Vladelec.weight<<std::endl;
	std::cout<<Kv132.Vladelec.height<<std::endl;
	std::cout<<Kv132.Vladelec.job<<std::endl;
	std::cout<<Kv132.number<<std::endl;
	std::cout<<Kv132.t1<<std::endl;
	std::cout<<Kv132.t2<<std::endl;
	std::cout<<Kv132.gaz<<std::endl;
	std::cout<<Kv132.hvs<<std::endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Human user = GetParamUser();
	printUser(user);
	
	std::cout<<"\n";
	
	Kvartira Kv132 = GetParamKvartira();
	printParamKvartira (Kv132);
	
	
	
	return 0;
}