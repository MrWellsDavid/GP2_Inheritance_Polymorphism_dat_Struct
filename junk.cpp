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
	int count = 0;
	iter = assignee.begin();
	for (int i = 0; i < assignee.size(); i++) {
		if (assignee.at(i) == assign) {
			assignee.erase(iter);
		}
		count++;
		iter++;
	}
}

//Accesors
worker* junk::getAsignee() {
	return assignee.back();
}
