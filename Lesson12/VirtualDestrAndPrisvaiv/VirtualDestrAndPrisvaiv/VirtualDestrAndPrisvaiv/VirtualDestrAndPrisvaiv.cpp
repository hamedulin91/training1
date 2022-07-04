#include <iostream>

class parent
{
public:
	virtual ~parent(){ std::cout << " Caller Destructor PARENT\n"; }
};

class child :public parent
{
private:
	int* m_arr;
public:
	child(int val) : m_arr(new int[val]) {}
	 virtual ~child() override { std::cout << "Caller Destructor CHILD\n"; delete[] m_arr; }

};

int main()
{
	child* ch = new child(7);
	parent* par = ch;
	delete par;

	return 0;
}