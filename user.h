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
	int getID() const; //and returns the . . .
	string view() const;
	string getIDString() const;

	//mutators
	void setName(string, string);
	void setPassword(string);
	void setUserID(int, string);
	void setUserID(string, string);
	void setUserID(string)
	//void setID(int);

private:

	

protected:
	string uName;

	int id;
	string first;
	string last;
	
};



#endif
