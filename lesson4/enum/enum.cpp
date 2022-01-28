#include <iostream>
#include <windows.h>
#include <string>

enum class Name 
{
	Ivan,Yura,Viktor,Igor,Alena,Boris,Roman
};

void PrintName(Name name){ 
	if (name==Name::Ivan)
		std::cout<<"Ivan \n";
	else if (name==Name::Yura)
		std::cout<<"Yura \n";
	else if (name==Name::Viktor)
		std::cout<<"Viktor \n";
	else if (name==Name::Igor)
		std::cout<<"Igor \n";
	else if (name==Name::Alena)
		std::cout<<"Alena '\n";
	else if (name==Name::Boris)
		std::cout<<"Boris \n";
	else if (name==Name::Roman)
		std::cout<<"Roman \n";
	else 
		std::cout<<"Нету такого имени"; 
}

int main ()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Name user1{Name::Ivan};
	
	PrintName (user1);
	
	
	return 0;
}