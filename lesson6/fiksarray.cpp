#include <iostream>
#include <string>
#include <windows.h>

	//������������ ���� ��� ������� ����
	namespace NameWork { //������������ ����
		enum NameWork { //������������ ������ ������������ ����
			Jopa, Pisya, Siski, Pizda, MaxWork,
		};
	}
	
	void arrayFunc (int b[5]) //���������� ������� � � ��� ���������� ������ �� ���������� � ������. ��� ��� ������������� �������� � �������������� 
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
	
	int array1[5]{4,8,16,32,64}; //������������� ������� ����� ������ ���������������
	std::cout<<array1[0]<<array1[1]<<array1[2]<<array1[3]<<array1[4]<<array1[5]<<std::endl;
	int array2[]{4,8,16,32,64}; //������������� ������� ����� ������ ��������������� ��� �������� ����� �������. ��� ���� ���������� ��� ���������� ����� �������. �� ���� ���� ����� ������ ���������������
	std::cout<<array2[0]<<array2[1]<<array2[2]<<array2[3]<<array2[4]<<array2[5]<<std::endl;
	
	//��� ��������� ��� ��� � ��� ����
	const int ItogoChildren(5);
	int ChildrenClass[ItogoChildren];
	ChildrenClass[1]={35};
	std::cout<<ChildrenClass[1]<<std::endl;
	
	//������� � ������������� ��� �������
	enum NameStudents {
		Ivan,Yra,Egor,Boris,Aleksandr,Mikle,MaxStudent,
	};
	
	int BallScores[MaxStudent];
	BallScores[Ivan]={100};
	
	//������� � ������������� � � ��������
	
	enum class NameWorker { //�������� ������������ � ������
		Vitya, Misha, Nikita, MaxWorker,
	};

	int Score[static_cast<int>(NameWorker::MaxWorker)];//��������� ������ � ������� ���������� � ������� �� ����������. �� �.� � ������� ������� �������������� � ��� �� �������� ���� ������� ����� ������������� � ������. ������ ���� ��  ����������� ������������ �� ����������
	Score[static_cast<int>(NameWorker::Vitya)]={100}; //��� �������������� ������ ������
	std::cout<<Score[static_cast<int>(NameWorker::Vitya)]<<std::endl; //��� ������� ������������������ ����� ������� �� �����
	//������� ����� �������� ������
	
	//������� � ������������� � ������������� ����
	//������������ ���� �� ����� ���� � ������� ���� �������� �������� ���� ��� �������� ���� ���� �������� ������������ ����
	int levelWork [NameWork::MaxWork];  //������ ������ � �������  ������� � ���� ������ �� ����������� ���� � ������� �� ������������ ������ ������������ ����  
	levelWork[NameWork::Jopa]={80}; // �������������� ������ �������
	std::cout<<levelWork[NameWork::Jopa]<<std::endl; //������� ������ �� �����
	
	
	//�������� ������� � �������
	
	int b[5]{1,2,3,4,5}; //������ ������ ������ 5 � �������������� ��������������� ��� ������������ �� 1 �� 5
	std::cout<<b[0]<<b[1]<<b[2]<<b[3]<<b[4]<<std::endl; //������� �� ����� �������� ��������
	arrayFunc(b); //�������� ������� , �������� � ��� ������ � � ��� ���������� .
	std::cout<<b[0]<<b[1]<<b[2]<<b[3]<<b[4]<<std::endl;//��������� �������� ������� ������� ����������� � �������. 
	
	//������ ������ ������� ������ �������� ���������� �� ��� ���� ������ ������� �����������
	int c[5]; 
	std::cout<<sizeof(c)<<"\n";
	std::cout<<sizeof(c[0])<<"\n"; //����� ������� �������� ������ ������ ���������� �������� ������� ���� ���� � ���������� ������� �������� ������������� �������� �������
	
	int v[]{1,2,3,4,5,6,7,8,9,10};
	std::cout<<sizeof(v)<<"\n";
	std::cout<<sizeof(v[0])<<"\n";
	std::cout<<sizeof(v)/sizeof(v[0])<<"\n"; //����� ������ ����� �������������� ������� ���� ����� ������ ������� sizeof(n) ��������� �� ������ �������� ������� sizeof(n[])
	
	std::string n[]{"Mikle","Vik","Jon"};
	std::cout<<sizeof(n)<<"\n";
	std::cout<<sizeof(n[0])<<"\n";
	std::cout<<sizeof(n)/sizeof(n[0])<<"\n";
	
	printSize(n); //��� �������� �������� ������� � ������� �� ������ ��� �� ������ ������� � ������ ���������
	
	
	//�������1
	//�������� ������ ��� �������� ����������� (������� �����) ������� ��� � ���� (����� 365 ����). ������������������ ������ ��������� 0.0 ��� ������� ���.
	double t[365]={0.0};
	std::cout<<t[0]<<" "<<t[159]<<"\n";
	
	//�������2
	int u[user::maxuser]{2,4,4,4,2};
	std::cout<<"Elephant have "<<u[user::elephant]<<" foot";
	
	return 0;
}