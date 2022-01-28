#include <iostream>
#include <array>

void printarr (std::array<int,5> years)
{
	std::cout<<years.size()<<"\n";
	std::cout<<sizeof(years)<<"\n";
	std::cout<<years[4]<<"\n";
}

void printarr1 (int arra[])
{
	std::cout<<sizeof(arra)<<"\n";
	std::cout<<arra[3]<<"\n";
}

int main ()
{
	int arra[]={1991,1999,2009,2012,2021};
	
	std::array<int,5>years {1991,1999,2009,2012,2021};
	
	std::cout<<years.size()<<"\n";
	
	std::cout<<sizeof(years)<<"\n";
	
	std::cout<<years.at(4)-years.at(3)<<"\n";
	
	for (const auto &a : years)
	{
		std::cout<<a<<" ";
	}
	
	std::cout<<"\n";
	
	printarr(years);
	
	printarr1(arra);
	
	
	return 0;
}