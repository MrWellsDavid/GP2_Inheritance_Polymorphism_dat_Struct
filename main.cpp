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

int menu() 
{
	int choice;
	cout << "\t \t \t Main \n"
		 << "1. Log Equipment in\n"
		 << "2. View Current Status\n"
		 << "3. Create Customer Ticket"
		 << "4. Certify(for manager use only)\n"
		 << "5. View Certified Ticket\n"
		 << "6. Create Employee\n"
		 << "7. View Employees\n"
		 << "8. Create Report\n"
		 << "Enter choice: ";
	cin >> choice;
	return choice;
}

void writeToFile2(int sn, string name, int status, string description)
{
	int count = 1;
	ofstream outData;
	outData.open("Equipment.txt", ios::app);
	for (int i =0; i < count; i++)
	{
		outData << "sn: "<< sn << "\n" << "Name: " << name << "\n" << "Status: " << status << "\n" << "Description: " << description << "(1. Open 2.Complete 3.Pending 4.Closed)" <<"\n-----------------" << endl;
	}
	
	outData.close();
}

void logEquip()
{
	int sn;
	int status;
	string name;
	string description;
	
	cout <<"\t \t \t Equipment \n"
		 <<"Enter the Serial Number: \n";
	cin >> sn;
	cout <<"Enter the name: \n";
	cin >> name;
	cout <<"Enter the status: (1. Open 2.Complete 3.Pending 4.Closed) \n";
	cin >> status;
	cout <<"Enter the description: \n";
	cin >> description;
	
	equip(sn, name, description);
	writeToFile2(sn, name, status, description);
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

void makeEmp() 
{
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

void writeToFile3(string first, string last, int id)
{
	int count = 1;
	ofstream outData;
	outData.open("Cus.txt", ios::app);
	for (int i =0; i < count; i++)
	{
		outData << first << " " << last << " " << id << endl;
	}
	
	outData.close();
}

cus* makeCus() 
{
	string first, last;
	int id;

	cout <<"\t \t \t Custumer \n"
		 <<"Enter first name: \n";
	cin >> first;
	cout <<"Enter last name: \n";
	cin >> last;
	cout <<"Enter your ID: \n";
	cin >> id;
	
	cus* cPTR = new cus(first, last, id);
	writeToFile3(first, last, id);
	return cPTR;
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

void viewStat()
{
	string line;
	ifstream inData ("Equipment.txt");
	if (inData.is_open())
	{
		while (getline (inData,line))
		{
			cout << line << '\n';
		}
		inData.close();
	}
}

int main(int argc, char** argv) 
{
	int option;
	cus* cPTR;
	int rec = 0;
	
	do
	{
		system("CLS");
		option = menu();
		
		switch(option)
		{
			case 1:
				logEquip();
				break;
			case 2: 
				viewStat();
				break;
			case 3:
				cPTR = makeCus();
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
			case 8:
				report* reporting();
				system("CLS");
//				cout << reporting -> consumerReport(cPTR) << endl;
				system("PAUSE");
				break;
			default : cout <<"Invalide choice!\n";	
		}
		system("PAUSE");
		
	}while(option != 9);
	
	return 0;
}
