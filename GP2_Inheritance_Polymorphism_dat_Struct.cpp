// GP2_Inheritance_Polymorphism_dat_Struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "user.h"
#include "cus.h"
#include "emp.h"
#include "equip.h"
#include "junk.h"
#include "parts.h"
#include "worker.h"
#include <string>

using namespace std;

// possibly build these out of main ?
int findUsr(user**, int, string);
bool startMenu(user**, int&, int);
string loginMenu();
bool checkPWord(user**, string, int);


string loginMenu() {
	string uName, pWord;
	cout << "==================== Login ===================="
		 << "\n\n\tUsername: ";
	cin >> uName;
	cout << "\n\tPassword: ";
	cin >> pWord;
	return pWord;
}
bool startLogin(user** uPTR, int& log, int usr) { // usr is the number of people in the system to check against
	int pos;
	string uName, pWord;// uName and pWord are for eacher individual user
	bool access = false;
	int denyCount = 3; // Number of times that someone can enter a wront password

	cout << "\n Login"
		<< "User Name:\t";
		cin >> uName;
	pos = findUsr(uPTR, usr, uName);
	if (pos != -1) {
		cout << "\n \t Password: ";
		cin >> pWord;
		access = checkPWord(uPTR, pWord, pos);
		do {
			if (access == true) {
				cout << "\n\n\n \t Welcome.\n\n\n";
				system("PAUSE");
				log = pos;
				return true;
			}
			else {
				cout << "DENIED\n"
					<< "you have tried:" << denyCount << "attemps MAY be limited"
					<< "enter the password you now remember:";
				cin >> pWord;
				denyCount++;
			}
			access = checkPWord(uPTR, pWord, pos);
		} while (denyCount <= 5);
		if (access == true) {
			cout << "\n\n\n \t Welcome.\n\n\n";
			system("PAUSE");
			log = pos;
			return true;
		}
	}
	else
		cout << " \nuser not found\n";
	return false;
}
int findUsr(user** uPTR, int usrnum, string name){//usrnum is the size of the users array
	for (int i = 0; i < usrnum; i++){
		if ((*uPTR)->getID() == name)
			return i;
		uPTR++;
	}
	return-1;
}
bool checkPWord(user** uPTR, string pass, int pos) {
	if ((*uPTR[pos]).getPWord() == pass)
		return true;
	return false;
}
int main() {
	equip a;
	a.setSN(9);
	cout << a.getSNString();
	//loginMenu();
	// create logic if successful log in of emp then continues to ticket
	// successfull of report then login to any
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
