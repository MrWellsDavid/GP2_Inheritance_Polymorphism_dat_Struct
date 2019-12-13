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
	string getName() const; // this will return only the names
	string getID();
	string getPWord();
	string view() const;
	//string getIDString() const; 
	int getIDNum(int);

	//mutators
	void setName(string, string);
	void setPassword(string);
	void setID(int, string);
	void setID(string, string);
	void setID(string);
	//void setID(int);

private:

	

protected:
	string uName;
	string uID;
	int id; //for incrementation
	string first;
	string last;
	
};



#endif
