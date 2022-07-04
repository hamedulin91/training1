#include <iostream>

class usbdev
{
private:
	int id;
public:
	usbdev(int i=0):id(i) {}

	int getID() { return id; }
};

class netdev
{
private:
	int id;
public:
	netdev(int i=0):id(i) {}

	int getID() { return id; }

};

class wirelesadapter: public usbdev, public netdev
{
public:
	wirelesadapter(int usbid, int netid ):usbdev(usbid),netdev(netid) {}
};

int main()
{
	wirelesadapter Viktor(1991,2022);
	std::cout <<Viktor.usbdev::getID()<<" "<< Viktor.netdev::getID();
	

	return 0;
}