//user.cpp
#include "user.h"
#include "sstream"
using namespace std;

//constructors

user::user() {
	setName("", "");
	setID(0);
}

user::user(string first, string last, int id) {
	setName(first, last);
	setID(id);
}

//mutators 
void user::setName(string first, string last) {
	this -> first = first;
	this -> last = last;
}

void user::setID(int idNum)
{
	this -> idNum = idNum;
}

void user::setPWord(string pWord)
{
	this -> pWord = pWord;
}

void user::setUsername(string uName)
{
	this -> uName = uName;
}

//accessors 
string user::view() 
{
	string message = "Name:" + first + " " + last + "\n \t\t\t ID: " + getIDString();
	return message;
}

string user::getName()  { return first + " " + last; }

int user::getID() { return usrID; }

int user::getIDNum(int num) { return idNum; }

string user::getPWord() { return pWord; }

string user::getIDString() 
{
	stringstream ID;
	ID << usrID;
	string message = ID.str();
	return message;
}

string user::getUsername()
{
	return uName;
}
