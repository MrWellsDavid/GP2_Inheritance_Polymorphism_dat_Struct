//user.h#pragma once
#ifndef USER_H
#define USER_H
#include <string>
using namespace std;
class user {
public:
	//constructors
	user();
	user(string, string, int);


	//accesssors
	string print() const; //this will return all attribute values
	string getName() const; // this will return only the names
	int getID() const; //and returns the . . .
	string view() const;
	string getIDString() const;

	//mutators
	void setName(string, string);
	void setID(int);

private:

	string username;
	int id;
	string first;
	string last;
};



#endif
