#include <iostream>

class gun
{
public:
	virtual void shoot() { std::cout << "BAM!\n"; }
};

class submachinegun :public gun
{
public:
	virtual void shoot() override { std::cout << "BAM BAM BAM!\n"; }
};

class bazuka :public gun
{
public:
	virtual void shoot() override { std::cout << "BOOOOM!\n"; }
};


class player
{
public:
	void shoot(gun* gun) { gun->shoot(); }

};

int main()
{
	gun Gun;
	submachinegun machinegun;
	bazuka Bazuka;

	player Viktor;
	player Mikle;
	player Nikita;

	Viktor.shoot(&machinegun);
	Mikle.shoot(&Gun);
	Nikita.shoot(&Bazuka);
	return 0;
}