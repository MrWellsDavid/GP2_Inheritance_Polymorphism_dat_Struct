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
void junk::setAssignee(worker* assign) {
	assignee.push_back(assign);
}

void junk::removeAssignee(worker* assign) {
	iter = assignee.begin();
	for (int i = 0; i < assignee.size(); i++) {
		if (assignee.at(i) == assign) {
			assignee.erase(iter);
		}
		iter++;
	}
}

//Accesors
worker* junk::getAsignee() {
	return assignee.back();
}
