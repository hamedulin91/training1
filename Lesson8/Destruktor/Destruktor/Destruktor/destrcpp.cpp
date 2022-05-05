#include <iostream>
#include <string>
#include <windows.h>

class computer
{
	
	int* val;

public:
	computer(int s)
	{
		val = new int[s];

		for (int i = 0; i < s; ++i)
		{
			val[i] = i;
		}

		std::cout << *val <<" constructor \n";

	}

	~computer()
	{
		std::cout << *val << "destructor \n";

		delete[] val;

		std::cout << *val << "destructor \n";
	}


};

	

void foo()
{
	int s = 1;
	computer one(s);

}


int main()
{
	foo();


	return 0;
}
