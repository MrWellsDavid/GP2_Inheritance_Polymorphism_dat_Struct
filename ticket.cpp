//ticket.cpp
#include "ticket.h"
using namespace std;

//constructors
ticket::ticket() {
	int status = 0;
	int hr_in = 0;
	int min_in = 0;
	int hr_out = 0;
	int min_out = 0;
	string timeFlagged = " ";
}
ticket::setTicket(int s, int hi, int mi, int ho, int mo, string tf) {
	int status = s;
	int hr_in = hi;
	int min_in = mi;
	int hr_out = ho;
	int min_out = mo;
	string timeFlagged ="tf";
}
void ticket::clearTicket() {// for reseting the ticket
	int status = 0;
	int hr_in = 0;
	int min_in = 0;
	int hr_out = 0;
	int min_out = 0;
	string timeFlagged = " ";
}
//timeSpent(time); // this needs to be checked by barron

//accesssors
int ticket::getCaseID();
string ticket::getCaseIDString();
string ticket::getTimeSpent();
//mutators
void setTo(worker*) // not sure if this is correct, needs barron to check
void setCaseID(int);
void setTimeSpent();