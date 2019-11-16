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
	string getname() const; // this will return only the names
	int getID() const; //and returns the . . .

	//mutators
	void setName(string, string);
	void setID(int);

private:

	string username;
	int id;
	string f;
	string l;
};



#endif