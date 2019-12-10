//ticket.h #pragma once
#ifndef TICKET_H
#define TICKET_H
#include <string>

using namespace std;

class ticket {
public:
	//constructors
	ticket();
	ticket(int, string, string, string, string);
	

	//accesssors
	int getCaseID()const {
		return caseID;
	}
	string getCaseIDString()const { //changes case id into a string
		return caseIDString;
	}
	string getClockIn()const {
		return clockOut;
	}
	string getClockOut()const {
		return clockIn;
	}
	//mutators
	void setTicket(int, string, string, string, string /*worker&*/); // not sure if this is correct, needs barron to check
	void setCaseID(int);
	void setClockIn(int);
	void setClockOut(int);
	void clearTicket();
private:
	string caseIDString;
	string timeFlagged;
	int caseID;
	string rStatus;// repair status 
	string clockIn;
	string clockOut;
	
	

	//things to do: change id int into string, create 


#endif