#include <iostream>
#include <random>

int main ()
{
	std::random_device rd;
	std::mt19937_64 mercer(rd());
	
	for (int a=0;a<=10;a++)
	{
		std::cout<<mercer()<<"\t";
		if ((a+1)%2==0) 
		{
			std::cout<<"\n";
		}
	}
	
	
	return 0;
}