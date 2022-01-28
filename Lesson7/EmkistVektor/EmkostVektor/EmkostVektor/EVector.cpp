#include <iostream>
#include <vector>

int main()
{
	std::vector<int> arr{ 34,53,43 };
	arr.resize(2);

	for (auto const& elem : arr)
	{
		std::cout << elem << " ";
	}

	std::cout << "\n";

	std::cout << arr.size();

	std::cout << "\n";

	std::cout << arr.capacity();

	return 0;
}