//report.cpp

#include "report.h"
#include <iostream>
#include <fstream>
using namespace std;

//Constructors
report::report() {
	
}

report::report(cus customer) {
	system("CLS");
	cout << consumerReport(customer) << endl;
	system("PAUSE");
}

//Functions
string report::consumerReport(cus customer) {
	string message;
	message = customer.getName() + "\n=========================\n" + customer.stuff[1] -> equip::getName() + ":\n\tAssigned to: " + customer.stuff[0] -> ticketing -> getAssignee() -> user::getName() + "\n\tStatus: " + customer.stuff.at(0) -> ticketing -> getStatusString() + "\n=========================\n";
	return message;
}


string report::endOfDay() {
	
}
