#include <iostream>

int main ()
{
	nt a;
	std::cout<<"Enter valuer: ";
	std::cin>>a;
	
	int *b = new int [a];
	
	std::cout<<"lenght array: "<<a<<std::endl;
	
	b[0]=77;
	
	std::cout<<*b<<std::endl;
	
	delete[] b;
	
	b=0
	
	//инициализация динамического массива списком инициализаторов
	
	int d=100000000000;
	char *c = new char[d]{'v','i','k','t'};
	
	for (int i=0;i<d;++i)
	{
	std::cout<<c[i]<<" ";
	}
	
	return 0;
}