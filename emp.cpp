//emp.cpp

#include "emp.h"
using namespace std;

//Constructors
emp::emp() {
	worker();
	setSec(1);
}

emp::emp(string first, string last, int id, int exp) {
	worker(first, last, id, exp);
	setSec(1);
}

//Accessors

string emp::getIDString() {
	return "e-" + user::getIDString();
}
