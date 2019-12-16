//note.h

#include <string>
using namespace std;

#ifndef NOTE_H
#define NOTE_H

class note {
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
		string getWatch();
		string getDate();
		string getTime();
	private:
		string timeSubmitted;
		string message;
};

#endif
