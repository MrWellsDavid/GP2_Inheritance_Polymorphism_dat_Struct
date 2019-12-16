//ticket.h

#include <queue>
#include <string>
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
