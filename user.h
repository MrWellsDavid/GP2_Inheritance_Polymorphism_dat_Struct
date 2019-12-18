//user.h

#include <string>
using namespace std;

#ifndef USER_H
#define USER_H

class user {
public:
	//constructors
	user();
	user(string, string, int);

	//accesssors
	string print() const; //this will return all attribute values
	string getName(); // this will return only the names
	int getID();
	string getPWord();
	string view() ; 
	int getIDNum(int); // increments the previous ID issued
	string getIDString();
	string getUsername();
	//mutators
	void setName(string, string);
	void setPWord(string);
	void setID(int);
	void setUsername(string);

private:

	virtual void print();
	string uName;
	int usrID;
	string pWord;
	int idNum; //for incrementation
	string first;
	string last;
	
};
#endif
