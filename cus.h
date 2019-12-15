//cus.h

#include "user.h"
#include "junk.h"
#include <vector>
#include <iterator>
using namespace std;

#ifndef CUS_H
#define CUS_H

class cus: public user {
	public:
		//contructors
		cus();
		cus(string, string, int);
		
		//mutators
		void newStuff(int, string, string);
		void returnStuff(string);
		
		//accessors
		string getIDString();
		

	private:
		vector<junk*> stuff;
		vector<junk*>::iterator iter;
};

#endif
