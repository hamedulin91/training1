#include <iostream>
#include <vector>

int main ()
{
	std::vector<int> darray {4,5,6,2,3};
	
	for (auto const &i : darray)
	{
		std::cout<<i<<" ";
	}
	
	std::cout<<"\n";
	
	std::cout<<darray.size()<<"\n";
	
	std::cout<<sizeof(darray)<<"\n";
	std::cout<<sizeof(darray)/sizeof(darray[0])<<"\n";
	
	return 0;
}