//worker.cpp
#include"worker.h"
using namespace std;
worker::worker()
{
	setExp(0);
	setPay(0);
	setSec(0);
}

void worker::setExp(int exp)
{
	this ->exp = exp;
}

void worker::setPay(double pay)
{
	this ->pay = pay;
}

void worker::setSec(int security)
{
	this ->security = security;
}

int worker::getExp() const{return exp;}
double worker::getPay() const{return pay;}
int worker::getSec() const{return security;}
