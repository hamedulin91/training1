#pragma once

#include <assert.h>

template<class V>
class Array
{
private:
	V a_lenght;
	V* a_data;
public:
	Array() :a_lenght(0), a_data(nullptr) {}

	Array(int l)
	{
		a_lenght = l;
		a_data = new V[l];
	}

	~Array() { delete [] a_data; }

	void erease()
	{
		delete[] a_data;
		a_lenght = 0;
		a_data = nullptr;
	}

	V& operator[](int i)
	{
		assert(i >= 0 && i <a_lenght);
		return a_data[i];
	}

	int getLenght();
};