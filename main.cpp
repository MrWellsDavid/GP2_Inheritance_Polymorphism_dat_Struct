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


int findUsr(user**, int, string);
bool startMenu(user**, int&, int);
string loginMenu();
bool checkPWord(user**, string, int);


string loginMenu() {
	string uName, pWord;
	cout << "/t==================== Login ===================="
		<< "\n\n\tUsername: ";
	cin >> uName;
	cout << "\n\tPassword: ";
	cin >> pWord;
	return pWord;
}

bool startLogin(user** uPTR, int& log, int usr) { // usr is the number of people in the system to check against
	int pos;
	string uName, pWord;
	bool access = false;
	int denyCount = 3; // Number of times that someone can enter a wrong password

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
int findUsr(user** uPTR, int usrnum, string uName) {//usrnum is the size of the users vector
	for (int i = 0; i < usrnum; i++) {
		if ((*uPTR)->usrID() == uName) // looks for a user name with the id incase there is someone with two of the same name
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
int main(int argc, char** argv) {
	loginMenu();
	return 0;
}
