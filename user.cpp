//user.cpp
#include "user.h"
#include "sstream"
using namespace std;

//constructors

user::user() {
	setName("", "");
	setID(0);
}
user::user(string f, string l, int id) {
	setName(f, l);
	setID(id);
}
//mutators 
void user::setName(string first, string last) {
	this -> first = first;
	this -> last = last;
}
void user::setID(int id) {
	this->id = id;
}

//accessors 
string user::view() const {
	string message = "Name:" + first + " " + last + "\n \t\t\t ID: " + getIDString();
	return message;

}
string user::getName() const { return first + " " + last; }
int user::getID()const { return id; }

string user::getIDString() const {
	stringstream ID;
	ID << id;
	string message = ID.str();
	return message;
}
