//note.h

#include "time.h"
#include <string>
using namespace std;

#ifndef NOTE_H
#define NOTE_H

class note {
	private:
		string timeSubmitted;
		string message;
	
	public:
		//Constructors
		note();
		note(string);
		
		//Mutators
		void setMessage(string);
		void setSubmitTime();
		
		//Accessors
		string getMessage();
		string getSubmitTime();
		string printNote();
};

#endif
