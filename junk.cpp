//junk.cpp
#include "junk.h"
using namespace std;

//Constructor
junk::junk() {
	equip();
}

junk::junk(int sn, string name, string description) {
	equip(sn, name, description);
	ticketing = new ticket();
}
