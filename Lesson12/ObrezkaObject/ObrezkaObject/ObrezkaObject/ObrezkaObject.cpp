#include <iostream>

class parent
{
protected:
	int pval;
public:
	parent(int v):pval(v) {}

	virtual const char* getName() { return "parent"; }

	int getValue() const { return pval; }
};

class child : public parent
{
public:
	child(int va) :parent(va) {}

	virtual const char* getName() { return "child"; }
};

int main()
{
	child Makar(2020);
	std::cout << Makar.getName() <<" "<< Makar.getValue() << std::endl;

	parent& ref = Makar;
	std::cout << ref.getName() << " " << ref.getValue()<<std::endl;

	parent* ptr = &Makar;
	std::cout << ptr->getName() << " " << ptr->getValue() << std::endl;

	parent Viktor = Makar;
	std::cout << Viktor.getName() << " " << Viktor.getValue() << std::endl; // ����� ������������ ���� ������� ������ ������� �� ���������� ���������� �����������
// ��������� ����������� �������� � ��������� ������ ������ ������ ����� ��� ���������� ��������. �������� ����� ����������
	// ��� � ���������� �������� �������
	// ��� ������� ��� �� ������������. �� � �������� �������������



	return 0;
}