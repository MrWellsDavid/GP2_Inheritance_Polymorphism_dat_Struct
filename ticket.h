//ticket.h #pragma once
#ifndef TICKET_H
#define TICKET_H
#include <string>

using namespace std;

class ticket {
public:
	//constructors
	ticket();
	ticket(int,int,int,int,int,string);
	//timeSpent(time); // this needs to be checked by barron

	//accesssors
	int getCaseID()const {
		return caseID;
	}
	string getCaseIDString()const {
		return caseIDString;
	}
	string getTimeSpent()const {
		return timeSpent;
	}
	//mutators
	void setTicket(int, int, int, int, int, string /*worker&*/); // not sure if this is correct, needs barron to check
	void setCaseID(int);
	void setTimeSpent(string);
	void clearTicket();
private:

	int status;
	int hr_in;
	int min_in;
	int hr_out;
	int min_out;
	string timeFlagged;
	




#endif