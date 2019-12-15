//junk.h

#include "equip.h"
#include "worker.h"
#include <vector>
#include <iterator>
using namespace std;

#ifndef JUNK_H
#define JUNK_H

class junk: public equip {
	public:
		//constructors
		junk();
		junk(int, string, string);
		
		//Mutator
		void setAssignee(worker*);
		void removeAssignee(worker*);
		
		//Accessor
		worker* getAsignee();
		
	private:
		vector<worker*> assignee;
		vector<worker*>::iterator iter;
};

#endif
