//report.h

#include "cus.h"
#include "ticket.h"
#include <vector>
#include <string>
using namespace std;

#ifndef REPORT_H
#define REPORT_H

class report {
	public:
		//Constructors
		report();
		report(cus*);
		
		//Functions
		string consumerReport(cus*);
		string endOfDay();
		string incompleteEOD(ticket*);
		
};

#endif
