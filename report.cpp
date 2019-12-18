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
	message = customer -> getName() + "\n=========================\n";
	for (int i = 0; i < customer -> stuff.size(); i++) {
		message += customer -> stuff[i] -> getName() + ":\n\tAssigned to: " + customer -> stuff[i] -> ticketing -> getAssignee() -> getName() + "\n\tStatus: " + customer -> stuff.at(i) -> ticketing -> getStatusString() + "\n=========================\n";
	}
}

string report::endOfDay() {
	
}
