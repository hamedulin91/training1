#include <iostream>

class parent
{
protected:
	int id;
public:
	parent(int i):id(i) {}
	
	int getID() { return id; }
	void identif() { std::cout << "im parent\n"; }

};

class child : public parent
{
public:
	child(int val):parent(val){}

	int getVAL() { return id; }
	void ident() { std::cout << "im child"; }
};

int main()
{
	child Viktor(1991);
	std::cout << Viktor.getVAL();

	return 0;
}