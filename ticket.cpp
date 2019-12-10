//ticket.cpp
#include "ticket.h"
using namespace std;

//constructors
ticket::ticket() {
	string caseIDString = " ";
	string timeFlagged = " ";
	int caseID = 0;
	string rStatus = " ";// repair status 
	string clockIn = " ";
	string clockOut = " ";
}
ticket::setTicket(string idS, string tf, string rs, string ci, string co, int id) {
	string caseIDString = "idS";
	string timeFlagged = "tf";
	int caseID = id;
	string rStatus = "rs";// repair status 
	string clockIn = "ci";
	string clockOut = "co";
}
void ticket::clearTicket() {// for reseting the ticket
	string caseIDString = " ";
	string timeFlagged = " ";
	int caseID = 0;
	string rStatus = " ";// repair status 
	string clockIn = " ";
	string clockOut = " ";
}
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