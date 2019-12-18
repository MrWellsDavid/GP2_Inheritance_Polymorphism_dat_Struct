//junk.h

#include "equip.h"
#include "ticket.h"
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
		
		//Data Structure
		ticket* ticketing;
		
};

#endif
