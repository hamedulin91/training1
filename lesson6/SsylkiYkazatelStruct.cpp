#include <iostream>

struct user
	{
		int ind;
		std::string name;
	};

int main ()
{
	
	
	user User1 = {1,"Viktor"};
	user User2 = {2,"Mikle"};
	user User3 = {3,"Vasya"};
	user User4 = {4,"Boris"};
	user User5 = {5,"Ivan"};
	
	
	std::cout<<User1.ind<<" "<<User1.name<<"\n";
	std::cout<<User2.ind<<" "<<User2.name<<"\n";
	std::cout<<User3.ind<<" "<<User3.name<<"\n";
	std::cout<<User4.ind<<" "<<User4.name<<"\n";
	std::cout<<User5.ind<<" "<<User5.name<<"\n";
	
	user &a = User1;
	
	a.name = "Yra";
	
	std::cout<<User1.ind<<" "<<User1.name<<"\n";
	std::cout<<a.ind<<" "<<a.name<<"\n";
	
	user *b = &User1;
	(*b).name = "Yana";
	std::cout<<User1.ind<<" "<<User1.name<<"\n";
	std::cout<<(*b).ind<<" "<<(*b).name<<"\n";
	std::cout<<b->ind<<" "<<b->name<<"\n";
	
	return 0;
}