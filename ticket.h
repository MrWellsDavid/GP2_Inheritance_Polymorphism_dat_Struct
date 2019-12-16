//ticket.h

#include <queue>
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
	

class ticket {
	public:
		//Constructors
		ticket();
		
		//Mutators
		setID();
		setStatus();
		closeTicket();
		
		//Accessors
		int getID();
		string getIDString();
		int getStatus();
		string getStatusString();
		string creationDate();
		string closeDate();

	private:
		int id;
		int status;
		string dateCreated;
		string dateClosed;
		//queue<note> notes;
};

#endif
