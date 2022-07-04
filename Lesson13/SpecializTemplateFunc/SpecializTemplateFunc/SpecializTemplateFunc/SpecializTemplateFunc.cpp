#include <iostream>
/*
template<class T>

class player
{
private:
	T value;
public:
	player(T v=0) :value (v) {}
	~player() {}

	void print() { std::cout << value << std::endl; }
};

template<>
void player<double>::print()
{
	std::cout << std::scientific << value << '\n';
}


int main()
{
	player<int> level (80);
	level.print();

	player<double> score(8000.50);
	score.print();

	return 0;
}
*/

template <class T>
class player
{
private:
	T val;
public:
	player(T v=0):val(v) {}
	~player() {}

	void print() { std::cout << val << "\n"; }
};

template<>
void player<double>::print()
{
	std::cout << std::scientific << val << "\n";
}

template<>
player<char*>::player(char* va)
{
	int lenght = 0;
	while (val[lenght] != '\n')
		++lenght;
	++lenght;

	va = new char[lenght];

	for (int i = 0; i < lenght; ++i)
	{
		val[i] = va[i];
	}
}

int main()
{
	//����� �������� ��������� ������. �,� �������� ��������� � ������ �� . �� ��������� �� ������������ ������� ������ ���� ��� ������ ������ ��������� 20 ��������
	char* st = new char[20];

	std::cout << "Enter name: "; // ������� ��������� � �������� ������ ���
	std::cin >> st; //�������� ��� ����������� ���������������� ���� ������ � ���������� �� 

	player<char*> pl(st); // ������� ������ �� �� ������� ������ ������, � ����� ������ ��������� ��� �� ��������� � ���� ���������� �� 
	//��������� � ���� ������ ������ ������� ���� ������������ 
	//��� �������� ���������� ������� � ������������ �������� ��������� �� ������������ ������ 
	// �� ���������� ������������� ����������� ������������� ����� ������� ��������� ����� ������������� ���������
	// �� ���� � ���� ������� ������ . � ��� �� ������� ��� ������ �� ��������

	delete[] st; //������� ����������� ���������� ����� � ������ ��� ��

	pl.print();



	return 0;
}