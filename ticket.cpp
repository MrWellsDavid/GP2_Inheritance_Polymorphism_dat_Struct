//ticket.cpp

#include <iostream>
#include <string>
#include <ctime>
#include "ticket.h"
using namespace std;

//============================================= T I C K E T =====================================
//Constructors
ticket::ticket() {
	note* creation = new note("------------------- TICKET CREATED -------------------");
	dateCreated = creation -> getDate();
	notes.push(creation);
	setStatus(1);
}

//Mutators
void ticket::setID(int id) {
	this -> id = id;
}

bool ticket::setStatus(int status) {
	if (status >= 1 && status <= 4) {
		this -> status = status;
		note* stats = new note(getStatusString());
		notes.push(stats);
		if (status == 4) {
			closeTicket();
		}
		return true;
	} else {
		system("CLS");
		cout << "Valid STATUS options:\n1. Open\n2.Complete\n3.Pending\n4.Closed\n";
		system("PAUSE");
		return false;
	}
}

void ticket::closeTicket() {
	setStatus(4);
	note* closing = new note("------------------- TICKET CLOSED -------------------");
	dateClosed = closing -> getDate();
	notes.push(closing);
}

void ticket::addNote(string message) {
	note* adding = new note(message);
	notes.push(adding);
}

//Accessors
int ticket::getID() {
	return id;
}

string ticket::getIDString() {
	stringstream ID;
	ID << id;
	return "Case #" + ID.str();
}

int ticket::getStatus() {
	return status;
}

string ticket::getStatusString() {
	switch(getStatus()) {
		case 1:
			return "Status set to Open";
			break;
		case 2:
			return "Status set to Complete";
			break;
		case 3:
			return "Status set to Pending";
			break;
		case 4:
			return "Status set to Closed";
			break;
		default:
			return "ERROR";
	}
}
