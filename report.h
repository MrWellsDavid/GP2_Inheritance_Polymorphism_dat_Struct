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
	string getFlag();
	string getConsumer();
	string getEOD();
	
	//mutators
	void setFlag();
	void setConsumer();
	void setEOD();

private:
	bool hrFlag;
	string consumerReport();
	string endOfDay();
	string incompleteEOD();
};






#endif
