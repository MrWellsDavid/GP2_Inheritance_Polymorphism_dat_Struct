//user.cpp
#include "user.h"

//constructors

user::user() {
	setName("", "");
	setID("");
}
user::user(string f, string l, int id) {
	setName(f, l);
	setID(id);
}
//mutators 
void user::setName(string first, string last) {
	this->first = first;
	thist->last = last;
}
void user::setID(int id) {
	this->id = id;
}

//accessors 
string user::view()const {
	return "Name:" + first + " " + last + "\n \t\t\t ID: " + id;

}
string user::getName() const { return first + " " + last; }
string user::getID()const { return id; }