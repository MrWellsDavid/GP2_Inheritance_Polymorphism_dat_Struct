//equip.cpp
#include <string>
#include <sstream>
#include "equip.h"

using namespace std;

equip::equip() {
	setSN(0);
	setStatus(0);
}

//getters
int equip::getSN()const{
	return sn;
}

int equip::getStatus()const{
	return status;
}

string equip::getSNString()const{
	stringstream snstring;
	snstring << getSN();
	return snstring.str();
}

string equip::getName()const{
	return name;
}

string equip::getDescription()const{
	return description;
}

string equip::getStatusString()const{
	stringstream statstring;
	statstring << getStatus();
	return statstring.str();
}

//setters

void equip::setStatus(int status){
	this -> status = status;
}

void equip::setSN(int sn){
	this -> sn = sn;
}

void equip::setName(string name){
	this -> name = name;
}

void equip::setDescription(string description){
	this -> description = description;
}
