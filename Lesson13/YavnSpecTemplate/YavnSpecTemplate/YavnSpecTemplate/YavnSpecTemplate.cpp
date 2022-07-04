#include <iostream>

template <class T>

class repos8
{
private:
	T arr[8];
public:
	void set(int ind, const T& val)
	{
		arr[ind] = val;
	}

	const T& get(int index)
	{
		return arr[index];
	}


};

int main()
{
	repos8<int> rep;

	for (int i = 0; i < 8; ++i)
	{
		rep.set(i, i);	
	}

	for (int ii = 0; ii < 8; ++ii)
	{
		std::cout << rep.get(ii);
	}

	

	return 0;
}