#include <iostream>

void sortInt(int *arr, int sarr)
{
	for (int i = 0; i < sarr; ++i)
	{
		int maxind = i;
		int tmp;
		for (int ii=i+1;ii<sarr;++ii)
		{
			if (arr[ii] > arr[maxind])
			{
				maxind = ii;
			}

			tmp = arr[maxind];
			arr[maxind] = arr[ii];
			arr[ii] = tmp;

		}
	}
}

int main()
{

	std::cout << "Enter value a: ";
	int a;
	std::cin >> a;

	std::cout << "\n";

	std::cout << "Enter value b: ";
	int b;
	std::cin >> b;

	std::cout << "\n";


	int arr[]{a,b};
	int sarr = sizeof(arr) / sizeof(arr[0]);

	for (int i=0;i<sarr;++i)
	{
		std::cout << arr[i] << " ";
	}

	sortInt(arr,sarr);

	std::cout << "\n";

	for (int i = 0; i < sarr; ++i)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}