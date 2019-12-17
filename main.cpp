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
		 << "6. Create Employee\n"
		 << "7. View Employees\n"
		 << "Enter choice: ";
	cin >> choice;
	return choice;
}

void writeToFile(string first, string last, int id, int exp)
{
	int count = 1;
	ofstream outData;
	outData.open("Employees.txt", ios::app);
	for (int i =0; i < count; i++)
	{
		outData << first << " " << last << " " << id << " " << exp << endl;
	}
	
	outData.close();
}

void makeEmp() {
	string first, last;
	int id;
	int exp;

	cout <<"\t \t \t Employee \n"
		 <<"Enter Employee first name: \n";
	cin >> first;
	cout <<"Enter Employee last name: \n";
	cin >> last;
	cout <<"Enter your ID: \n";
	cin >> id;
	cout <<"How many years have you worked? \n";
	cin >> exp;
	
	emp(first, last, id, exp);
	writeToFile(first, last, id, exp);
}

void viewEmp()
{
	string line;
  	ifstream inData ("Employees.txt");
  	if (inData.is_open())
  	{
	    while ( getline (inData,line) )
	    {
	      cout << line << '\n';
	    }
	    inData.close();
	}

  else cout << "Unable to open file"; 
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
			case 6:
				makeEmp();
				break;
			case 7:
				viewEmp();
				break;
			default : cout <<"Invalide choice!\n";	
		}
		system("PAUSE");
		
	}while(option != 8);
	
	return 0;
}
