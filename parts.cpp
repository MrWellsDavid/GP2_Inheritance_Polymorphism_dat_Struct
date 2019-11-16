//parts.cpp
#include"parts.h"

parts::Parts()
{
	setPrice(0);
}

void parts::setPrice(double price)
{
	this ->price = price;
}

double parts::getPrice() const{return price;}
