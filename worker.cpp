//worker.cpp
#include"worker.h"
using namespace std;
worker::worker()
{
	user();
	setExp(0);
	setPay(0);
	setSec(0);
}

worker::worker(string first, string last, int id, int exp) {
	user(first, last, id);
	setSec(0);
	setPay(exp);
}

void worker::setExp(int exp)
{
	this ->exp = exp;
}

void worker::setPay(int exp)
{
	setExp(exp);
	if (this -> exp < 10) {
		this -> pay = 100.00 + ( this -> exp * 15.00);
	} else {
		pay = 250.00;
	}
}

void worker::setSec(int security)
{
	this ->security = security;
}

int worker::getExp() const{return exp;}
double worker::getPay() const{return pay;}
int worker::getSec() const{return security;}
