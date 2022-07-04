#include <iostream>

class a
{
private :
	int id;
public:
	a(int i = 0):id(i) {}
	int getID() { return id; }
};

class b : public a
{
private:
	int val;
public:
	b(int v = 0, int id = 0):a(id), val(v) {}
	int getVal() { return val; }
};

int main()
{
	a Viktor;
	Viktor=1991;

	b Makar(2022,2000);

	std::cout << Viktor.getID()<<std::endl;

	std::cout << Makar.getID() << " " << Makar.getVal() << std::endl;
	


	return 0;
}