//ticket.h

#include <queue>
#include <string>
#include <iostream>
//#include <ctime>
#include <sstream>
#include <fstream>
using namespace std;

#ifndef TICKET_H
#define TICKET_H

class ticket {
	public:
		//Constructors
		ticket();
		
		//Mutators
		setID();
		setStatus();
		closeTicket();
		
		void setTimeSpent();
		void setCaseID();
		void setCaseIDString();
		
		//Accessors
		int getID();
		string getIDString();
		int getStatus();
		string getStatusString();
		string creationDate();
		string closeDate();
		
		int getCaseID() const{return caseID;}
		string getCaseIDString()const{return caseIDString;}
		char getTimeSpent()const{return timeSpent;}
		//string getStatus()const{return status;}
		//int getStatusString()const{return statusString;}

	private:
		int id;
		int status;
		string dateCreated;
		string dateClosed;
		//queue<note> notes;
		
		string caseIDString;
		string timeFlagged;
		int caseID;
		string rStatus;// repair status 
		char clockIn;
		char clockOut;
		char timeSpent ;
};

#endif
