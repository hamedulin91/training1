#include <iostream>

class parent
{
private:
	int id;
public:
	parent(int i=0):id(i) {}
protected:
	void ident() { std::cout << " im parent "; }
};

class child : public parent
{
public:
	child(int val=0) :parent(val) {}
	using parent::ident;
};


int main()
{
	parent father;
	
	child son;
	son.ident();

	return 0;
}