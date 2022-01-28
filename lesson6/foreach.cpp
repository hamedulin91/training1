#include <iostream>
#include <string>

int main ()
{
	std::string name[]={"Sasha","Ivan","John","Orlando","Leonardo","Nina","Anton","Molly"};
	
	for (const auto a : name)
	{
	std::cout<<a<<" ";
	}
	
	std::cout<<"\n";
	
	std::cout<<" Enter name player: ";
	std::string b;
	std::getline(std::cin,b);
	
	std::string d;
	for (const auto c : name)
	{
		if (b==c)
		{
			d=c;
		}
	}
	
	if (b==d){
		std::cout<<"Completed";
	} else {
		std::cout<<"not completed";
	}
	
	
	return 0;
}