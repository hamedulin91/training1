#include <iostream>

void GetYkazMM()
{
	int *a = new int {1991};
}

int main ()
{
	int *a = new (std::nothrow) int (10);
	if (!a)
	{
		std::cout<<"memory not  allocate"<<std::endl;
	}
	int *b = a;
	std::cout<<*a<<std::endl;
	std::cout<<a<<std::endl;
	std::cout<<*b<<std::endl;
	std::cout<<b<<std::endl;
	
	delete a;
	
	std::cout<<"=============������������ ������������ ������================"<<std::endl;
	
	std::cout<<*a<<std::endl;
	std::cout<<a<<std::endl;
	std::cout<<*b<<std::endl;
	std::cout<<b<<std::endl;
	
	std::cout<<"=============������������� ������ ������� ���������� ������================"<<std::endl;
	
	*a=0;
	std::cout<<*a<<std::endl;
	std::cout<<a<<std::endl;
	std::cout<<*b<<std::endl;
	std::cout<<b<<std::endl;
	
	std::cout<<"=============������������� ������� ���������� ���������================"<<std::endl;
	
	
	*a=200;
		
	std::cout<<*a<<std::endl;
	std::cout<<a<<std::endl;
	std::cout<<*b<<std::endl;
	std::cout<<b<<std::endl;	
	
	*a=0;
	delete a;
	
	std::cout<<*a<<std::endl;
	std::cout<<a<<std::endl;
	std::cout<<*b<<std::endl;
	std::cout<<b<<std::endl;	
	
	
	
	return 0;
}