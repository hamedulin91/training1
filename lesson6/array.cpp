#include <iostream>
#include <string>

int main ()
{
	int User[10];
	double Scores[10];
	User[0]=10;
	User[1]=17;
	User[2]=38;
	User[3]=42;
	User[4]=5;
	User[5]=9;
	User[6]=13;
	User[7]=16;
	User[8]=1991;
	User[9]=2020;
	
	Scores[0]=0.1;
	Scores[1]=0.2;
	Scores[2]=0.3;
	Scores[3]=4.1;
	Scores[4]=5.1;
	Scores[5]=6.3;
	Scores[6]=3.1;
	Scores[7]=43.1;
	Scores[8]=13.1;
	Scores[9]=31.1;
	
	std::cout<<User[0]+Scores[9]-(User[9]*Scores[4])<<std::endl;
	
	struct ArrayTest
	{
		int id;
		std::string name;
	};
	ArrayTest artest[5];
	artest[0].id = 421;
	
	std::cout<<artest[0].id<<std::endl;
	
	int a[10]; //массив длиной 10
	a[5]=10; //литерал Константу в качестве индека
	
	short b(19); //обьявляем и присваиваем значеие переменной шорт
	a[b] = 3; //используем переменуб шорт как индекс массива
	
	//Более быстрый способ инициализации индиксирования массива
	int x[5]={4,5,3,65,100};//Инициализация идентификация масива данным в одной строке. Точнее называется Списком Инициализаторов
	int y[5]{3,2,1,4}; //Униформ инициализация без знака равно доступна с версии с++11
	std::cout<<y[0]<<y[1]<<y[2]<<y[3]<<y[4]<<std::endl;
	
	int z[]{1991,1992,1993,1994,1995};//Задавать длину массива списком инициализаторов не указывая длину массива. компилатор сам определит длинну массива по его элементам
	
	//задать длину массива и индиксирование через перечилсения
	enum class Race 
	{
		human, undead, ork, alf, max_race,
	};
	
	int hprace [static_cast<int>(Race::max_race)]{100,150,500,50};
	
	
	//массивы через пространство имен
	namespace array 
	{
		axe, sword, staff, arbalet
	}
	
	
	return 0;
}