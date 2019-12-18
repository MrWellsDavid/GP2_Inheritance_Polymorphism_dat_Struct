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
		
		//Functions
		string consumerReport(cus*);
		string endOfDay(ticket*);
		string incompleteEOD(ticket*);
		
};

#endif
