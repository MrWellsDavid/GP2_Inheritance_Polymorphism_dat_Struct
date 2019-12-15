//emp.cpp

#include "emp.h"
using namespace std;

//Constructors
emp::emp() {
	worker();
	setSec(1);
}

emp::emp(string first, string last, int id, int exp, double pay) {
	worker(first, last, id, exp, pay);
	setSec(1);
}

//Accessors

string emp::getIDString() {
	return "e-" + user::getIDString();
}
