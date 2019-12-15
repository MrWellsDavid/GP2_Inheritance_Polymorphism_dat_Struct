//ticket.h #pragma once
#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>
//#include <ctime>
#include <sstream>
#include <fstream>

using namespace std;

class ticket {
public:
	//constructors
	ticket();
	
	
	
	//mutator
	void setTimeSpent();
	void setCaseID();
	void setCaseIDString();
	//accessor
	int getCaseID() const{return caseID;}
	string getCaseIDString()const{return caseIDString;}
	char getTimeSpent()const{return timeSpent;}
	string getStatus()const{return status;}
	//int getStatusString()const{return statusString;}
private:
	string caseIDString;
	string timeFlagged;
	int caseID;
	string rStatus;// repair status 
	char clockIn;
	char clockOut;
	char timeSpent ;
};
	

	//things to do: change id int into string, create 


#endif
