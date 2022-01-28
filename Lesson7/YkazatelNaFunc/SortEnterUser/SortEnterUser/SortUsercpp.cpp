#include <iostream>

void sortFunc(int *arr,int sa, bool (*MinMax)(int,int))
{
	for (int i = 0; i<sa; ++i)
	{
		int mini = i;
		int tmp;
		for (int ii = mini+1; ii<sa; ++ii)
		{
			if (MinMax(arr[mini], arr[ii]))
			{
				mini = ii;
			}

			tmp = arr[i];
			arr[i] = arr[mini];
			arr[mini] = tmp;
		}
	}
}

bool min(int a, int b)
{
	return a > b;
}

bool max(int a , int b)
{
	return a < b;
}

void printArr(int *arr, int sa)
{
	for (int i = 0; i<sa;++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}



int main()
{
	int arr[]{3,2,5,2,74,23,75,34,12,43};
	int sa = sizeof(arr) / sizeof(arr[0]);

	sortFunc(arr,sa,min);
	printArr(arr,sa);


	sortFunc(arr,sa,max);
	printArr(arr, sa);

	return 0;
}