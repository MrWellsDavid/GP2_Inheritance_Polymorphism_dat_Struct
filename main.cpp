//main.cpp

#include "cus.h"
#include "emp.h"
#include "equip.h"
#include "junk.h"
#include "man.h"
#include "note.h"
#include "parts.h"
#include "report.h"
#include "ticket.h"
#include "user.h"
#include "worker.h"

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std; 

int menu() {
	int choice;
	cout << "\t \t \t Main \n "
		<< "Enter number of choice"
		<< "1. log equipment in"
		<< "2. view current status"
		<< "3. stop work"
		<< "4. certify(for manager use only)"
		<< "5. view certified ticket "
		<< "\t\t:___";
	cin >> choice;
	return choice;
}

void makeEmp(vector<emp>* empPTR) {
	string first, last;
	int security;
	int choice;

}

int main(int argc, char** argv) {
	loginMenu();
	return 0;
}
