//junk.cpp
#include "junk.h"
using namespace std;

//Constructor
junk::junk() {
	equip();
}

junk::junk(int sn, string name, string description) {
	equip(sn, name, description);
}

//Mutators
void junk::setAssignee(worker assign) {
	assignee.push_back(assign);
}

//Accesors
worker* junk::getAsignee() {
	return &assignee.back();
}
