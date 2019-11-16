//parts.cpp
#include"parts.h"

Parts::Parts()
{
	setPrice(0);
}

Parts::setPrice(double price)
{
	this ->price = price;
}

double Parts::getPrice() const{return price;}
