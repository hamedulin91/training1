#include <iostream>
#include <string>
#include <windows.h>

	//Пространство имен для массива ниже
	namespace NameWork { //Протсранство имен
		enum NameWork { //Перечесление внутри пространства имен
			Jopa, Pisya, Siski, Pizda, MaxWork,
		};
	}
	
	void arrayFunc (int b[5]) //вызывается функция и в нее передается массив со значениями и длиной. Тут ему присваиваются значения в индитификаторы 
	{
		b[0]=5;
		b[1]=6;
		b[2]=7;
		b[3]=8;
		b[4]=9;
	}
	
	void printSize(std::string n[]){
		std::cout<<sizeof(n)<<"\n";
	};
	
	namespace user {
		enum user {
			chiken,lion,giraffe,elephant,duck,snake,maxuser,
		};
	}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int array [] {1,2,3,4,5,6,7,8,9};
	
	array[1]=1;
	array[2]=2;
	array[3]=3;
	array[4]=4;
	array[5]=5;
	array[6]=6;
	array[7]=7;
	
	std::cout<<array[1];
	std::cout<<array[2];
	std::cout<<array[3];
	std::cout<<array[4];
	std::cout<<array[5];
	std::cout<<array[6];
	std::cout<<array[7];
	std::cout<<array[8];
	std::cout<<array[9];
	std::cout<<array[10]<<std::endl;
	
	int nullarray[10]{};
	std::cout<<nullarray[3];
	std::cout<<nullarray[4];
	std::cout<<nullarray[5]<<std::endl;
	
	int array1[5]{4,8,16,32,64}; //инициализация массива через список инициализаторов
	std::cout<<array1[0]<<array1[1]<<array1[2]<<array1[3]<<array1[4]<<array1[5]<<std::endl;
	int array2[]{4,8,16,32,64}; //Инициализация массива через список инициализаторов БЕЗ указания дляны массива. при этом компилятор сам определяет длину массива. НО лишь если через список инициализаторов
	std::cout<<array2[0]<<array2[1]<<array2[2]<<array2[3]<<array2[4]<<array2[5]<<std::endl;
	
	//Тут непонятно кто где и что есть
	const int ItogoChildren(5);
	int ChildrenClass[ItogoChildren];
	ChildrenClass[1]={35};
	std::cout<<ChildrenClass[1]<<std::endl;
	
	//Массивы с перечислением без классов
	enum NameStudents {
		Ivan,Yra,Egor,Boris,Aleksandr,Mikle,MaxStudent,
	};
	
	int BallScores[MaxStudent];
	BallScores[Ivan]={100};
	
	//Массивы с перечислением и с классами
	
	enum class NameWorker { //Задается перечисление в классе
		Vitya, Misha, Nikita, MaxWorker,
	};

	int Score[static_cast<int>(NameWorker::MaxWorker)];//Создается массив с длинной НэймВоркер с ссылкой на МаксВокрер. Но т.к в классах неявное преобразование в инт не работает надо сделать явное преоброзвание с помошь. статик каст на  НэймВорекра ссылающегося на МаксВоркер
	Score[static_cast<int>(NameWorker::Vitya)]={100}; //Тут инициализируем массив числом
	std::cout<<Score[static_cast<int>(NameWorker::Vitya)]<<std::endl; //Тут выводим инициализированную часть массива на экран
	//Слишком много длинного текста
	
	//Массивы с перечеслением и пространством имен
	//Пространство имен не может быть в функции мэйн поэтомпу смотрите выше над функцией мэйн есть заданное пространство имен
	int levelWork [NameWork::MaxWork];  //Задаем массив с длинной  массива в виде ссылки на пространсва имен и ссылкой на перечесление внутри пространства имен  
	levelWork[NameWork::Jopa]={80}; // Инициализируем массив данными
	std::cout<<levelWork[NameWork::Jopa]<<std::endl; //выводим данные на экран
	
	
	//передача массива в функцию
	
	int b[5]{1,2,3,4,5}; //задаем массив длиной 5 и инициализируем идентвифицируем его значениямсми от 1 до 5
	std::cout<<b[0]<<b[1]<<b[2]<<b[3]<<b[4]<<std::endl; //Выводим на экран значения заданные
	arrayFunc(b); //вызываем функцию , Передаем в нее массив Б с его значениями .
	std::cout<<b[0]<<b[1]<<b[2]<<b[3]<<b[4]<<std::endl;//выводятся значения массива которые установленн в функции. 
	
	//узнать размер массива размер массивай умножается на вес типа данных который испольуется
	int c[5]; 
	std::cout<<sizeof(c)<<"\n";
	std::cout<<sizeof(c[0])<<"\n"; //Можно такимже способом узнать размер отдельного элемента массива надо лишь в квадратных скобках дописать идентификатор элемента массива
	
	int v[]{1,2,3,4,5,6,7,8,9,10};
	std::cout<<sizeof(v)<<"\n";
	std::cout<<sizeof(v[0])<<"\n";
	std::cout<<sizeof(v)/sizeof(v[0])<<"\n"; //Чтобы узнать длину фиксированного массива надо общий размер массива sizeof(n) разделить на размер элемента массива sizeof(n[])
	
	std::string n[]{"Mikle","Vik","Jon"};
	std::cout<<sizeof(n)<<"\n";
	std::cout<<sizeof(n[0])<<"\n";
	std::cout<<sizeof(n)/sizeof(n[0])<<"\n";
	
	printSize(n); //при передаче значений массива в функцию он вернет нам не размер массива а размер указателя
	
	
	//Задание1
	//Объявите массив для хранения температуры (дробное число) каждого дня в году (всего 365 дней). Проинициализируйте массив значением 0.0 для каждого дня.
	double t[365]={0.0};
	std::cout<<t[0]<<" "<<t[159]<<"\n";
	
	//Задание2
	int u[user::maxuser]{2,4,4,4,2};
	std::cout<<"Elephant have "<<u[user::elephant]<<" foot";
	
	return 0;
}