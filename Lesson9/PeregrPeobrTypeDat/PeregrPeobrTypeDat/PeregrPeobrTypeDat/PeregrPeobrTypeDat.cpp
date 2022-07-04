#include <iostream>

class player
{
private:
	int score;
public:
	player(int s=0):score(s) {}

	int getS() { return score; }

	void setS(int i) { score = i; }

	operator int() { return score; }
};

void print(int val)
{
	std::cout << val;
}

int main()
{
	player Vik;
	Vik=80;
	print(Vik);


	return 0;
}