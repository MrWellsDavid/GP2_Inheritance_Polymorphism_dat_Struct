//parts.cpp

#include"parts.h"
using namespace std;

//Constructors
parts::parts() {
	equip();
	setPrice(0);
}

parts::parts(double price, int sn, string name, string description) {
	equip(sn, name, description);
	setPrice(price);
}

//Mutators
void parts::setPrice(double price) {
	this -> price = price;
}

//Accessors
double parts::getPrice() const {
	return price;
}
