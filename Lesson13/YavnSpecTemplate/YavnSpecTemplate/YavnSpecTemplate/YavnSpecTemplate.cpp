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


template<>
class repos8<bool>
{
private:
	unsigned char m_data;
public:
	repos8() :m_data(8) {}
	void set(int ind, bool val)
	{
		unsigned char mask = 1 << ind;

		if (val)
		{
			m_data |= mask;
		}
		else
		{
			m_data &= ~mask;
		}
	}

	bool get(int ind)
	{
		unsigned char mask = 1 << ind;
		return (m_data & mask) != 0;
	}

};

int main()
{


	return 0;
}