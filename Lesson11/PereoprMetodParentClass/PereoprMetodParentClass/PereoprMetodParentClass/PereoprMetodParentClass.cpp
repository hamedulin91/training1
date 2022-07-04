#include <iostream>

class parent
{
protected:
	int id;
	void im() { std::cout << id << " im a parent \n"; }
public:
	parent(int i):id(i) {}

	int getID() { return id; }

	void getIM() { return im(); }

	
};

class child : public parent
{
public:
	child(int val):parent(val) {}

	void im() { 
		parent::im();
		std::cout << id << " im a child \n"; 
	}
};

int main()
{
	parent father(1991);
	father.getIM();

	child son(2022);
	son.im();

	return 0;
}