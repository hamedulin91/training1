#include <iostream>
#include <string>

void changeInt(int &linka)
{
	linka = 1991;
}

struct counter
{
	double t1;
	double t2;
	double hvs;
	double gaz;
};

struct Kv 
{
	int number;
	std::string owner;
	counter count;
};
 
int main ()
{
	int a = 29;
	int &b = a;
	
	std::cout<<b<<"\n";
	
	b = 30;
	
	std::cout<<a<<"\n";
	
	++b;
	
	std::cout<<a<<"\n";
	
	int c=100;
	
	b = c;
	
	std::cout<<a<<"\n";
	
	changeInt(a);

	std::cout<<a<<"\n";

	Kv kv132 = {132,"Viktor",{1,2,3,4}};
	
	std::cout<<kv132.owner<<" "<<kv132.number<<" "<<kv132.count.t1<<" "<<kv132.count.t2<<" "<<kv132.count.hvs<<" "<<kv132.count.gaz<<"\n";
	
	std::string &owner = kv132.owner;
	int &number = kv132.number;
	int &t1 = kv132.count.t1;
	int &t2 = kv132.count.t2;
	int &hvs = kv132.count.hvs;
	int &gaz = kv132.count.gaz;
	
	std::cout<<owner<<" "<<number<<" "<<t1<<" "<<t2<<" "<<hvs<<" "<<gaz<<"\n";
	
	return 0;
}