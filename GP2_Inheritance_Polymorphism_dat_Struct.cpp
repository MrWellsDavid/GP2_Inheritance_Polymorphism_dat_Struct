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

void loginMenu() {
	string uName, pWord;
	cout << "==================== Login ===================="
		 << "\n\n\tUsername: ";
	cin >> uName;
	cout << "\n\tPassword: ";
	cin >> pWord;
}

int main() {
	loginMenu();
	
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
