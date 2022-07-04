#include <iostream>
#include <cassert>
#include <initializer_list>

class Arrayint
{
private:
	int m_lenght;
	int *m_data;
public:
	Arrayint():m_lenght(0), m_data(nullptr) {}
	
	Arrayint(std::initializer_list<int>& list):Arrayint(list.size()) 
	{
		int ind = 0;
		for (auto& element : list)
		{
			m_data[ind] = element;
			++ind;
		}
	}

	Arrayint(int lenght) :m_lenght(lenght) { m_data = new int[lenght]; }
	~Arrayint() { delete[] m_data; }
	int& operator[]( int index )
	{
		assert(index >= 0 && index < m_lenght);
		return m_data[index];
	}
	int getLenght() { return m_lenght; }

	
};

int main()
{
	Arrayint ar[2]{1991,2022};

	for (int i = 0; i < 2; ++i)
	{
		std::cout << ar[i];
	}

	return 0;
}