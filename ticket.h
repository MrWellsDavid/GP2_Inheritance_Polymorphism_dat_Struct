//ticket.h

#include "note.h"
#include "worker.h"
#include <queue>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

#ifndef TICKET_H
#define TICKET_H



class ticket {
	public:
		//Constructors
		ticket();
		
		//Mutators
		void setID(int);
		bool setStatus(int);
		void closeTicket();
		void addNote(string);
		void setAssignee(worker*);
		void removeAssignee(worker*);
		
		//Accessors
		int getID();
		string getIDString();
		int getStatus();
		string getStatusString();
		worker* getAssignee();
		
		//Data Structure
		vector<worker*> assignee;
		vector<worker*>::iterator iter;

	private:
		int id;
		int status;
		string dateCreated;
		string dateClosed;
		queue<note*> notes;
};

#endif
