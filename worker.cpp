//worker.cpp
#include"worker.h"

Worker::Worker()
{
	setExp(0);
	setPay(0);
	setSec(0);
}

void Worker::setExp(int exp)
{
	this ->exp = exp;
}

void Worker::setPay(double pay)
{
	this ->pay = pay;
}

void Worker::setSec(int security)
{
	this ->security = security;
}

int Worker::getExp() const{return exp;}
double Worker::getPay() const{return pay;}
int Worker::setSec() const{return security;}
