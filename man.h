//man.h

#include"worker.h"
using namespace std;

#ifndef MAN_H
#define MAN_H

class man: public worker{
	public:
		//Constructors
		man();
		man(string, string, int, int);
		
		//Accessors
		string getIDString();
};

#endif
