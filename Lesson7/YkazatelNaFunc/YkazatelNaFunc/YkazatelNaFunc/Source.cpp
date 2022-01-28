#include <iostream>
#include <algorithm>

void enter()
{
	std::cout << '\n';
}

int func1()
{
	return 2021;
}

int func()
{
	return 1991;
}

bool maxsrav(int a, int b)
{
	return a < b;
}

bool minsrav(int a, int b)
{
	return a > b;
}

void sortArr(int *arr, int sarr, bool(*sort)(int a,int b))
{
	for (int i = 0; i < sarr-1; ++i) 
	{
		int ind = i;
		int tmp;
		for (int ii=i+1;ii<sarr;++ii)
		{
			if (sort (arr[ind],arr[ii]))
			{
				ind = ii;
			}
			//std::swap(arr[i], arr[ind]);
			tmp = arr[i];
			arr[i] = arr[ind];
			arr[ind] = tmp;
		}
		enter();
		for (int iii = 0; iii < sarr; ++iii)
		{
			std::cout << arr[iii] << " ";
		}
		enter();
	}
}

int main()
{
	std::cout << func();
	enter();
	std::cout << func;
	enter();

	std::cout << enter;
	enter();

	//”казатель на функцию
	int(*test)();
	//”казатель на функцию
	enter();

	int(*test1)() = func1;
	std::cout << test1;
	enter();
	std::cout << func1;
	enter();
	std::cout << (*test1)();
	enter();
	std::cout << test1();
	
	int arr[]{ 4, 8, 5, 6, 2, 3, 1, 7 };
	int sarr = sizeof(arr) / sizeof(arr[0]);
		
	enter();

	for (int i = 0; i < sarr; ++i)
	{
		std::cout << arr[i] << " ";
	}

	enter();
	
	sortArr(arr,sarr, maxsrav);

	enter();
	for (int i=0; i<sarr; ++i)
	{
		std::cout << arr[i] << " ";
	}
	enter();

	sortArr(arr, sarr, minsrav);

	enter();
	for (int i = 0; i < sarr; ++i)
	{
		std::cout << arr[i] << " ";
	}
	enter();

	return 0;
}