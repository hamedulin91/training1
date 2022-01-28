#include <iostream>

void printMarr (int *marr)
{
	
	std::cout<<sizeof(marr)<<std::endl;
	*marr = 100;
}

int main ()
{
	int a{4};
	int arr[a]{1,4,2,3};
	
	for (int i=0;i<a;++i)
	{
		std::cout<<arr[i]<<" ";
	}
	std::cout<<std::endl;
	
	for (int ii=0;ii<a;++ii)
	{
		std::cout<<&arr[ii]<<" ";
	}
	
	std::cout<<std::endl;
	
	std::cout<<"arr: "<<"\t"<<*arr<<std::endl;
	std::cout<<"&arr[0] :"<<*&arr[0]<<std::endl;
	
	std::cout<<std::endl;
	
	int *b = arr;
	
	std::cout<<b;
	std::cout<<"\n";
	std::cout<<*b;
	std::cout<<"\n";
	
	char c[] = "Viktor";
	std::cout<<c;
	std::cout<<"\n";
	std::cout<<*c;
	std::cout<<"\n";
	
	int marr[]{22,32,12,53};
	std::cout<<sizeof(marr)<<"\n";
	std::cout<<marr[0]<<"\n";
	std::cout<<&marr[0]<<"\n";
	
	
	printMarr(marr);
	
	std::cout<<marr[0]<<"\n";
	std::cout<<&marr[0]<<"\n";
	
	return 0;
}