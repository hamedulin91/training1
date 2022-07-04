#pragma once 

#include <cassert>;

class ArrayInt
{
private:
	int alenght;
	int* adata;
public:
	ArrayInt():alenght(0),adata(nullptr) {}
	ArrayInt(int lenght) :alenght(lenght)
	{
		assert(lenght >= 0);

		if (lenght > 0)
		{
			adata = new int[lenght];
		}
		else
			adata = nullptr;
	}

	~ArrayInt()
	{
		delete[] adata;
	}

	void erase()
	{
		delete[] adata;

		adata = nullptr;
		alenght = 0;
	}

	int& operator[](int index)
	{
		assert(index >= 0 && index <= alenght);
		return adata[index];
	}

	int getLenght() { return alenght; }

	void rellocate(int newLenght)
	{
		erase();
		if (newLenght <=0)
		{
			return;
		}

		adata = new int[newLenght];
		alenght = newLenght;
	}

	void resize(int newLenght)
	{
		if (newLenght == alenght)
		{
			return;
		}

		if (newLenght <= 0)
		{
			erase();
			return;
		}

		int* data = new int[newLenght];

		if (alenght > 0)
		{
			int elementcopy = (newLenght > alenght) ? alenght : newLenght;
			for (int ind = 0; ind < elementcopy; ++ind)
			{
				data[ind] = adata[ind];
			}
		}

		delete[]adata;

		adata = data;
		alenght = newLenght;
	}

	void insertBefore(int value, int index)
	{
	
	}
};