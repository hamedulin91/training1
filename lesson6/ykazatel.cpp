#include <iostream>

void foo (int *&p) //������� ������� ��������� �������� P � �������������� ����� ������� �������� �������� �� ���� ���������� � ������� �����
{
}


int main ()
{
	
	int a=5; //�������� ���������� ������� ��� ��� ����� � ������. � ���������������� �� �������� ����� ����� ��������. ������� � ���������� ����� ������ �������� ������������� ����
	int *b=&a;  //�������� ���������� ������������� ��� ��������� �� ��� ���������� � ����������� �� �������� ������ ����������� ����������. ������ �������� 4 ����� � 32 ��������� �������
	
	std::cout<<b<<"\n"; //������� �� ����� � �������� ������ ��������� . �.� ������� ����������� ��� ����� ������ �� �����
	std::cout<<*b; //������������  ��������� � ������� ���������. � ������ ������ ��������� ��� �������� �������������. �.� ������� �������� ������� �������� � ���� ������ ������
	
	std::cout<<"\n";
	
	*b = 10; //��������������� ��������� ������� ��� ����� ��������� ������������� �������� ������������ ������ ������������� ��������
	std::cout<<*b<<"\n";
	std::cout<<b<<"\n"; //������� ����� ������ � ������� �������� ���������� �. �.� �� ������������ ���� ����� � ������� ��������� � � �������� ���� � �� ����� �� ���������
	
	int c=20; //�������� ����� ������������� ���������� � ����������������
	int *d=&c;  // �������� ��������� �� ����� ����� ������������� ���������� � ���������������
	
	std::cout<<d<<"\n"; // ������� ����� �����
	
	std::cout<<sizeof(a)<<"\n"; //������� ������ ������������� ���������� ������ ���������� 4 ����� 
	std::cout<<sizeof(b)<<"\n"; //������� ������ ��������� �� ����� ������������� ���������� 8 ���� ������ � 64 ��������� ��������
	std::cout<<sizeof(c)<<"\n"; //������� ������ ������������� ���������� ������ ���������� 4 �����
	std::cout<<sizeof(d)<<"\n";//������� ������ ��������� �� ����� ������������� ���������� 8 ����� ������ � 64 ��������� ��������
	
	int a;
	std::cout<<"Enter integer value : ";
	std::cin>>a;
	
	std::cin.ignore(32767,'\n');
	
	std::cout<<a<<" adress memory: ";
	std::cout<<&a<<"\n";
	
	int *b=&a;
	
	std::cout<<*b<<" meaning adressa: ";
	std::cout<<b<<"\n";
	
	int *c;
	std::cout<<"Enter second value: ";
	std::cin>>*c;
	
	std::cin.ignore(32767,'\n');
	
	std::cout<<"adress mamory second value "<<&*c;
	
	
int *p; //�������� ��������� P. ��� ��� �� �� ��������������� �� �� ��������� �� ������� ������ � ������� �������� �����
foo(p);// �������� ������� � ������� �������� ����� ����� ���������
std::cout<<*p; //������� �� ����� �������������� �������� ���������� , ������ ������� �� ��� ���������� � ���� ���������� �.� �����
	
	return 0;
}