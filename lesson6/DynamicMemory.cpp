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
	
	std::cout<<"=============ÎÑÂÎÁÎÆÄÅÍÈÅ ÄÈÍÀÌÈ×ÅÑÊÎÉ ÏÀÌßÒÈ================"<<std::endl;
	
	std::cout<<*a<<std::endl;
	std::cout<<a<<std::endl;
	std::cout<<*b<<std::endl;
	std::cout<<b<<std::endl;
	
	std::cout<<"=============ÈÍÈÖÈÀËÈÇÀÖÈß ÏÓÑÒÛÕ ÂÈÑß×ÈÕ ÓÊÀÇÀÒÅËÅÉ ÍÓËßÌÈ================"<<std::endl;
	
	*a=0;
	std::cout<<*a<<std::endl;
	std::cout<<a<<std::endl;
	std::cout<<*b<<std::endl;
	std::cout<<b<<std::endl;
	
	std::cout<<"=============ÈÍÈÖÈÀËÈÇÀÖÈß ÍÓËÅÂÛÕ ÓÊÀÇÀÒÅËÅÉ ÇÍÀ×ÅÍÈÅÌ================"<<std::endl;
	
	
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