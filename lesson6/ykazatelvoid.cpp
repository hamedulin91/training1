#include <iostream>
#include <string>

int main ()
{
	int a{10};
	double b{5.5};
	std::string name="Viktor";
	
	void *c;
	
	c=&a;
	
	std::cout<<*c<<"\n";
	
	c=&b;
	
	std::cout<<*c<<"\n";
	
	c=&name;
	std::cout<<*c<<"\n";
	
	return 0;
}