//man.cpp

#include "man.h"
using namespace std;

//Constructors
man::man() {
	worker();
	setSec(2);
}

man::man(string first, string last, int id, int exp) {
	worker(first, last, id, exp);
	setSec(2);
}

//Accessors

string man::getIDString() {
	return "e-" + user::getIDString();
}
