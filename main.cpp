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
	cout << "\t \t \t Main \n"
		 << "1. log equipment in\n"
		 << "2. view current status\n"
		 << "3. stop work\n"
		 << "4. certify(for manager use only)\n"
		 << "5. view certified ticket\n"
		 << "Enter choice: ";
	cin >> choice;
	return choice;
}

void writeToFile(string first, string last, int security)
{
	int count;
	ofstream outData;
	outData.open("Employees.txt");
	for (int i =0; i < count; i++)
	{
		outData << first << " " << last << " " << security << endl;
	}
	outData.close();
}

void makeEmp(vector<emp>* empPTR) {
	string first, last;
	int security;

	cout <<"\t \t \t Employee \n"
		 <<"Enter Employee first name: \n";
	cin >> first;
	cout <<"Enter Employee last name: \n";
	cin >> last;
	cout <<"Are you adept? (1 for no 2 for mabey)\n";
	cin >> security;
	
	writeToFile(first, last, security);
}

int main(int argc, char** argv) {
	int option;
	int rec = 0;
	
	do
	{
		system("CLS");
		option = menu();
		
		switch(option)
		{
			case 1:
				break;
			case 2: 
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default : cout <<"Invalide choice!\n";	
		}
		system("PAUSE");
		
	}while(option != 6);
	
	return 0;
}
