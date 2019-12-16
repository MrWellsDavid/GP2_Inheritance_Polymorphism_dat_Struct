//note.cpp

#include "note.h"
#include <time.h>
using namespace std;

//============================================= N O T E =========================================
//Constructors
note::note() {
	timeSubmitted = getTime();
	setMessage("NULL");
}

note::note(string message) {
	note();
	setMessage(message);
}

//Mutators
void note::setMessage(string message) {
	this -> message = message;
}

//Accessors
string note::getMessage() {
	return message;
}

string note::getSubmitTime() {
	return timeSubmitted;
}

string note::printNote() {
	return getSubmitTime() + "\t" + getMessage();
}

string note::getWatch() {
	time_t curr_time;
	tm * curr_tm;
	char time_string[100];
	
	time(&curr_time);
	curr_tm = localtime(&curr_time);
	
	strftime(time_string, 10, "%H:%M:%S", curr_tm);
	
	return time_string;
}

string note::getDate() {
	time_t curr_time;
	tm * curr_tm;
	char date_string[100];
	
	time(&curr_time);
	curr_tm = localtime(&curr_time);
	
	strftime(date_string, 10, "%m/%d/%Y", curr_tm);
	
	return date_string;
}

string note::getTime() {
	return getDate() + " " + getWatch();
}
