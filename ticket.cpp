//ticket.cpp


#include <iostream>
#include <string>
#include "ticket.h"

using namespace std;

	ticket::ticket(){
		setTimeSpent(0);
		setCaseID(0);
		setCaseIDString("");
	}
	ticket::caseID();
	ticket::timeSpent();
	
	//mutator
	void ticket::setTimeSpent();
	void ticket::setCaseID();
	void ticket::setCaseIDString();
	//accessor
	int ticket::getCaseID() const{return caseID;}
	string ticket::getTimeSpent()const{return timeSpent;}
	int ticket::getStatus()const{return status;}
	//int ticket::getStatusString()const{return statusString.str();}
	//string ticket::getCaseIDString()const{return caseIDString;}

	//things to do: change id int into string, create 
