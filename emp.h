//emp.h

#include "worker.h"
using namespace std;

#ifndef EMP_H
#define EMP_H


class emp: public worker {
	public:
		//Constructors
		emp();
		emp(string, string, int, int);
		
		//Accessors
		string getIDString();
};

#endif
