//cus.h

#include "junk.h"
#include <vector>
#include <iterator>
using namespace std;

#ifndef CUS_H
#define CUS_H

class cus {
	public:
		//contructors
		cus();
		//mutators
		
		//accessors
	private:
		vector<junk> stuff;
		vector<junk>::iterator iter;
};

#endif
