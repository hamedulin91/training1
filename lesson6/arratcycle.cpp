#include <iostream>
#include <string>
#include <windows.h>

int main ()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//��� ������� � ������
	const int numStudent {5};
	
	int scorestud1{23};
	int scorestud2{34};
	int scorestud3{56};
	int scorestud4{18};
	int scorestud5{6};
	
	int totalscpre = scorestud1+scorestud2+scorestud3+scorestud4+scorestud5;
	double avargescore = static_cast<double>(totalscpre)/numStudent;
	std::cout<<avargescore<<std::endl;
	//��� ������� � ������
	
	//� �������� �� ��� �����
	const int numGamer {5};
	int levelGamer [numGamer] {11, 20, 30, 40, 80};
	int totallevel = levelGamer[0]+levelGamer[1]+levelGamer[2]+levelGamer[3]+levelGamer[4];
	double avargelevel = static_cast<double>(totallevel)/numGamer;
	
	std::cout<<avargelevel<<std::endl;
	//� �������� �� ��� �����
	
	//������� � ������
	//������ ��� ������� ������� �������� ���� ���� � ����������� �� ��������� ������ � ������
	int LevelGamer[] {80000,60000,80000,50000,60000,80000,1000};//������� ������ ������ ��� ����� � ��������������� ���� ����������.��������������
	const int maxNumGamer = sizeof(LevelGamer)/sizeof(levelGamer[0]); //������ ������� ����� ������� ������ ������� � ��� ���������  � ���
	
	int totalLevel=0;//������ �������������� �������� ������ ����������  ������ �������
	
	for (int player=0; player < maxNumGamer; ++player){ //��� ��������������� ����������� �� ���� ��������� ������� � ���������� � ���� ����� ���� �������� ������������ ����� � �������� ����������� ���������� ��������� �� ���������� ��������� ��������. ����� ����� ���������� �������� �� �������
		totalLevel += LevelGamer[player]; // ����������� � ���������� � ���������� ��� ����� ��������� ������ �������� �� ������� � �������� ������� ������ ����� �������� . ������ �������� ���������� ����� ����� ���������� � �������� �������� ���������� ��������� �������� �������� ������� 
	}
	
	double avargeLevelPlayers = static_cast<double>(totalLevel)/maxNumGamer;//������� ������� ����� �� ���� �������, ������� ����� �������� ����� �� ����� ���������� �������. ����� �������� ��������������� � ������� ������ �������������� � ������
	std::cout<<avargeLevelPlayers<<std::endl;
	//������� � ������
	
	//�������� ��������� ��������������� �������� �������� �������� ���������� ����� ����������� � ����������� �� �� ���������� � ������� ��
	int salaryemployee []{10000,10000, 1000000};
	const int amountuser = sizeof(salaryemployee)/sizeof(salaryemployee[0]);
	
	int totalsalary = 0;
	
	for (int user = 0; user < amountuser; ++user)
	{
		totalsalary += salaryemployee[user];
	}
	
	double avargesalaryemployee = static_cast<double>(totalsalary)/amountuser;
	
	std::cout<<avargesalaryemployee<<std::endl;
	
	//�������� ��������� �� ������ ���������� �������� �� �����������
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
	
	
	
	//������� �� ����� �������� ������
	int array[]={7,5,6,4,9,8,2,1,3};
	const int numar = sizeof(array)/sizeof(array[0]);
	
	for (int ar=0;ar<numar;ar++){
	std::cout<<array[ar]<<std::endl;
	}
	std::cout<<"���� �������"<<std::endl;
	
	
	
	
	/*������� �� �����   int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };  
	��������� ������������ ������ ����� �� 1 �� 9. ���� ������������ ������ ���-���� ������ � ��������� ��� ����� ������ ����� � ��� �� ��� ���, ���� �� �� ������ ���������� �������� �� ��������� ���������. 
	��� ������ ������������ ������ ����� �� 1 �� 9, �������� ������ �� �����. ����� ������� � ������� ������� � ������, ������� ���� ������������, � �������� ��� ������.
	��� ��������� ������������� ����� ����������� ��������� ���:
	// ���� ������������ ���� ������������ ��������
	if (std::cin.fail())
	{
		std::cin.clear(); 
		std::cin.ignore(32767, '\n'); 
		}	
	*/
	
	int arr[]{7, 5, 6, 4, 9, 8, 2, 1, 3};
	const int numarr = sizeof(arr)/sizeof(arr[0]);
	
	int a;
	std::cout<<"������� ����� �� 1 �� 9: ";
	std::cin>>a;
	while (a<1||a>9) 
	{
		std::cout<<"�� ����� �� ������ ����� . ������� ����� �� 1 �� 9: ";
		std::cin>>a;
	}
	
	std::cout<<"�� ����� ���������� ����� : "<<a<<"\n";
	
	std::cout<<"������ ����� : ";	
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