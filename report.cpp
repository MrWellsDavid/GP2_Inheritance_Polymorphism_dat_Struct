//report.cpp

#include "report.h"
#include <iostream>
#include <fstream>
using namespace std;

//Constructors
report::report() {
	
}

report::report(cus* customer) {
	system("CLS");
	cout << consumerReport(customer) << endl;
	system("PAUSE");
}

//Functions
string report::consumerReport(cus* customer) {
	string message = "";
	message = customer -> getName() + "\n=========================\n" + customer -> stuff[0] -> getName() + ":\n\tAssigned to: " + customer -> stuff[0] -> ticketing -> getAssignee() -> getName() + "\n\tStatus: " + customer -> stuff[1] -> ticketing -> getStatusString() + "\n=========================\n";
	return message;
}

string report::endOfDay() {
	
}
