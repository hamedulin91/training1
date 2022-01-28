#include <iostream>
#include <windows.h>
#include <string>

enum class counter 
{
	t1,t2,hvs,gaz
};

std::string SetStringCounter (counter name)
{
	if (name==counter::t1)
	{
		return "Дневная электроэнергия Т1";
	}
	
	if (name==counter::t2)
	{
		return "Ночная электроэнергия Т2";
	}
	
	if (name==counter::hvs)
	{
		return "Холодне водоснабжение";
	}
	
	if (name==counter::gaz)
	{
		return "Газоснабжение";
	}
	
	else "Нет такого счетчика";
}

struct flat 
{
	int number;
	std::string owner;
	std::string countert1;
	std::string countert2;
	std::string counterhvs;
	std::string countergaz;
	
};

void PrintStructFlat (flat type)
{
	std::cout<<type.number<<type.owner<<type.countert1<<type.countert2<<type.counterhvs<<type.countergaz<<std::endl;
}

int main ()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	
	
	return 0;
}