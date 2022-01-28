#include <iostream>

void printText(const char *text, int arrt)
{
	for (int ind = 0; ind < arrt; ++ind)
	{
		std::cout << text[ind];

		if (text[ind] == '\0')
		{
			break;
		}

	}
}

int main()
{
	char text[] = "Hello world";
	int arrt = sizeof(text) / sizeof(text[0]);

	printText(text, arrt);


	return 0;
}