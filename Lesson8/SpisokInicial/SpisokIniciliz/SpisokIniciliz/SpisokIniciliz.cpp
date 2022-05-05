#include <iostream>
#include <string>

class user
{
	const int id;
	std::string name;
	int age;

public:		
	user(int i, std::string n, int a)
		: id{ i }, name{ n }, age{ a }
	{
	}

	void printuser()
	{
		std::cout << id<<" "<<name<<" "<<age<<"\n";
	}
};

class arr
{
	const int m_arr[5];

public:
	arr():m_arr{1,5,3,7,54}
	{}
};


int main()
{
	user viktor(2,"mikle",30);
	viktor.printuser();


	return 0;
}

