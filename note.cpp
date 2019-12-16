//note.cpp

#include "note.h"
using namespace std;

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
