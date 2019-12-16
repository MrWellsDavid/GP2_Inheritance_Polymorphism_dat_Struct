//report.h

#include <string>
using namespace std;

#ifndef REPORT_H
#define REPORT_H

class report {
	public:
		//constructors
		report();
		
		//accessors
		bool getFlag();
		string getConsumer();
		string getEOD();
		
		//mutators
		void setFlag(bool);
		void setConsumer();
		void setEOD();
	
	private:
		bool hrFlag;
		string consumerReport();
		string endOfDay();
		string incompleteEOD();
};

#endif
