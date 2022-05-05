#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	srand(static_cast<int>(time(0)));

	const int sa = 100;
	int a[sa];

	for (int i = 0; i < sa; ++i)
	{
		a[i] = rand()%100 + 1;
	}

	for (int ii = 0; ii < sa; ++ii)
	{
		std::cout << a[ii] << "\t";

		if ((ii % 5 ) == 0)
		{
			std::cout << std::endl;
		}
	}

	return 0;
}