//cus.cpp

#include "cus.h"
using namespace std;

//Constructors
cus::cus() {
	user();
}

cus::cus(string first, string last, int id) {
	user(first, last, id);
}

//Mutators
void cus::newStuff(int sn, string name, string description) {
	stuff.push_back(new junk(sn, name, description));
}

void cus::returnStuff(string name) {
	iter = stuff.begin();
	for(int i = 0; i < stuff.size(); i++) {
		if(stuff.at(i) -> getName() == name) {
			stuff.erase(iter);
		}
		iter++;
	}
}

//Accessors
string cus::getIDString() {
	return  "c-" + user::getIDString();
}
