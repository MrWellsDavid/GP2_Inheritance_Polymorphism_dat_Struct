//user.h
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
	string getName(); // this will return only the names
	string getID();
	string getPWord();
	string view() const; 
	int getIDNum(int); // increments the previous ID issued

	//mutators
	void setName(string, string);
	void setPWord(string);
	void setID(int, string);
	void setID(string, string);
	void setID(string);
	

private:

	virtual void print() = 0;

protected:
	string uName;
	string usrID;
	int idNum; //for incrementation
	string first;
	string last;
	
};



#endif
