//time.h

#include <ctime>
#include <string>
using namespace std;

#ifndef TIME_H
#define TIME_H

string watch() {
	time_t curr_time;
	tm * curr_tm;
	char time_string[100];
	
	time(&curr_time);
	curr_tm = localtime(&curr_time);
	
	strftime(time_string, 10, "%H:%M:%S", curr_tm);
	
	return time_string;
}

string date() {
	time_t curr_time;
	tm * curr_tm;
	char date_string[100];
	
	time(&curr_time);
	curr_tm = localtime(&curr_time);
	
	strftime(date_string, 10, "%m/%d/%Y", curr_tm);
	
	return date_string;
}

string getTime() {
	return date() + " " + watch();
}

#endif
