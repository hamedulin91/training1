#include <iostream>

enum class item
{
	item_healtch, item_torch, item_arrows , max_items,
};

int countTotalItem(int *arritems)
{
	int totalitem = 0;

	for (int ind=0;ind<static_cast<int>(item::max_items);++ind)
	{
		totalitem += arritems[ind];
	}

	return totalitem;

}

int main()
{
	int arritems[static_cast<int>(item::max_items)]{100,10,50};

	std::cout << countTotalItem(arritems);

	return 0;
}