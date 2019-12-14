//user.cpp
#include "user.h"
#include "sstream"
using namespace std;

//constructors

user::user() {
	setName("", "");
	setID(0);
}
/*
user::user(string first, string last, int id) {
	setName(first, last);
	setID(id);
}
*/
//mutators 
void user::setName(string first, string last) {
	this -> first = first;
	this -> last = last;
}
void user::setID(int id, string letter)
{
	stringstream sstm;
	sstm << letter << id;
	usrID = sstm.str();
}
void user::setID(string id, string letter) {
	stringstream sstm;
	sstm << letter << id;
	usrID = sstm.str();
}
void user::setID(string wholeID)
{
	usrID = wholeID;
}
//accessors 
string user::view() const {
	string message = "Name:" + first + " " + last + "\n \t\t\t ID: " + getIDString();
	return message;

}
string user::getName()  { return first + " " + last; }
string user::getID() { return usrID; }
int user::getIDNum(int num) { return idNum; }

string user::getIDString()  {
	stringstream ID;
	ID << id;
	string message = ID.str();
	return message;
}
