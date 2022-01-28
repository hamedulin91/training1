#include <iostream>
#include <string>
#include <windows.h>

int main ()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//Без массива и циклов
	const int numStudent {5};
	
	int scorestud1{23};
	int scorestud2{34};
	int scorestud3{56};
	int scorestud4{18};
	int scorestud5{6};
	
	int totalscpre = scorestud1+scorestud2+scorestud3+scorestud4+scorestud5;
	double avargescore = static_cast<double>(totalscpre)/numStudent;
	std::cout<<avargescore<<std::endl;
	//Без массива и циклов
	
	//С массивом но без цикла
	const int numGamer {5};
	int levelGamer [numGamer] {11, 20, 30, 40, 80};
	int totallevel = levelGamer[0]+levelGamer[1]+levelGamer[2]+levelGamer[3]+levelGamer[4];
	double avargelevel = static_cast<double>(totallevel)/numGamer;
	
	std::cout<<avargelevel<<std::endl;
	//С массивом но без цикла
	
	//Массивы с циклом
	//Данный код считает среднее значение чего либо в зависимости от введенных данных в массив
	int LevelGamer[] {80000,60000,80000,50000,60000,80000,1000};//Сначала задаем массив без длины с индексированием всех эелементов.Инициализацией
	const int maxNumGamer = sizeof(LevelGamer)/sizeof(levelGamer[0]); //Теперь считаем длину массива тобишь соклько у нас элементов  в нем
	
	int totalLevel=0;//Задаем первоночальное значение общего количества  уровня игроков
	
	for (int player=0; player < maxNumGamer; ++player){ //Для автоматического прохождения по всем элементам массива и выполнения с ними каких либо действий используются циклы с заданным количеством повторений зависящим от количества эелементо вмассива. Такой метод называется Итерация по массиву
		totalLevel += LevelGamer[player]; // Присваеваем и прибовляем к переменной где будут считаться левела значение из массива с индексом которое задает число счетчика . каждая итерация повторение цикла будет прибавлять к текущему значению переменной следующее значение элемента массива 
	}
	
	double avargeLevelPlayers = static_cast<double>(totalLevel)/maxNumGamer;//Считаем средний левел по всем игрокам, Поделив общее значение лвлов на общее количество игроков. Общее значение преобразовываем с помошью явного преобразования в доубле
	std::cout<<avargeLevelPlayers<<std::endl;
	//Массивы с циклом
	
	//Написать программу автоматического подсчета среднего значения заработной платы сотрудников в зависимости от их количества и размера зп
	int salaryemployee []{10000,10000, 1000000};
	const int amountuser = sizeof(salaryemployee)/sizeof(salaryemployee[0]);
	
	int totalsalary = 0;
	
	for (int user = 0; user < amountuser; ++user)
	{
		totalsalary += salaryemployee[user];
	}
	
	double avargesalaryemployee = static_cast<double>(totalsalary)/amountuser;
	
	std::cout<<avargesalaryemployee<<std::endl;
	
	//Написать программу по поиску наибольшей зарплаты из сотрудников
	int salaryplayer []{11,22,44,25,5,50,11 ,15,12, 50};
	const int amountplayer = sizeof(salaryplayer)/sizeof(salaryplayer[0]);
	
	int salary = 0;
	
	for (int user = 0; user<amountplayer; ++user)
	{
		
		if (salaryplayer[user]>salary){
			salary = salaryplayer[user];
		}
		
	}
	
	std::cout<<salary<<std::endl;
	
	
	
	//Вывести на экран заданный массив
	int array[]={7,5,6,4,9,8,2,1,3};
	const int numar = sizeof(array)/sizeof(array[0]);
	
	for (int ar=0;ar<numar;ar++){
	std::cout<<array[ar]<<std::endl;
	}
	std::cout<<"Цикл выведен"<<std::endl;
	
	
	
	
	/*Вывести на экран   int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };  
	Попросите пользователя ввести число от 1 до 9. Если пользователь введет что-либо другое — попросите его снова ввести число и так до тех пор, пока он не введет корректное значение из заданного диапазона. 
	Как только пользователь введет число от 1 до 9, выведите массив на экран. Затем найдите в массиве элемент с числом, которое ввел пользователь, и выведите его индекс.
	Для обработки некорректного ввода используйте следующий код:
	// Если пользователь ввел некорректное значение
	if (std::cin.fail())
	{
		std::cin.clear(); 
		std::cin.ignore(32767, '\n'); 
		}	
	*/
	
	int arr[]{7, 5, 6, 4, 9, 8, 2, 1, 3};
	const int numarr = sizeof(arr)/sizeof(arr[0]);
	
	int a;
	std::cout<<"Введите число от 1 до 9: ";
	std::cin>>a;
	while (a<1||a>9) 
	{
		std::cout<<"Вы ввели не верное число . Введите число от 1 до 9: ";
		std::cin>>a;
	}
	
	std::cout<<"Вы ввели правильное число : "<<a<<"\n";
	
	std::cout<<"Массив чисел : ";	
	for (int ii=0;ii<numarr;++ii)
	{
		std::cout<<arr[ii];
	
	}
	
	for (int yy=0; yy<numarr; ++yy)
	{
		if (arr[yy]==a)
		{
			std::cout<<a<<yy;
			break;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}