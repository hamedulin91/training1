#include <iostream>
#include <string>

void printString(const char *chr)
{
	if (chr)
	{
		std::cout << chr;
	}
}



int main()
{
	char chr[] = "Hello word";


	printString(chr);
	std::cout << "\n";

	std::string str = "hello Viktor";
	std::cout << str << std::endl;
	char ch;
	std::cout << "Enter char: ";
	std::cin >> ch;

	int ind = str.find(ch);

	if (ind != -1)
		std::cout << ch << " index string: " << ind << "\n";
	else
		std::cout << ch << ": error not find char"<<"\n";
	return 0;
}