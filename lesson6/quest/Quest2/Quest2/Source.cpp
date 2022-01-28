#include <iostream>
#include <string>

struct stud
{
	std::string name;
	int ball;
};

void sortStud(stud *arrstud, int valstud)
{
	for (int ii=0;ii<valstud-1;++ii) 
	{
		int maxind = ii;
		int tmp;
		
		for (int iii=ii+1;iii<valstud;++iii)
		{
			if (arrstud[iii].ball > arrstud[maxind].ball)
			{
				maxind = iii;
			}
		}

		tmp = arrstud[ii].ball;
		arrstud[ii].ball = arrstud[maxind].ball;
		arrstud[maxind].ball = tmp;
	}
};

int main()
{
	std::cout << "how value student your have enter: ";
	int valstud;
	std::cin >> valstud;

	stud *arrstud = new stud[valstud];

	for (int ind = 0; ind<valstud; ++ind) 
	{
		std::cout << "Enter " << ind << " Name array: ";
		std::cin >> arrstud[ind].name;

		std::cout << "Enter " << ind << " Ball array: ";
		std::cin >> arrstud[ind].ball;
	}

	sortStud(arrstud,valstud);

	for (int i=0; i<valstud; ++i)
	{
		std::cout << arrstud[i].name << " " << arrstud[i].ball << std::endl;

	}

	return 0;
}