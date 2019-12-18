//equip.h
#include <string>
using namespace std;

#ifndef EQUIP_H
#define EQUIP_H

class equip {
	public:
		//Constructor
		equip();
		equip(int, string, string);
		//Accessors
		int getSN()const;
		int getStatus()const;
		string getSNString()const;
		string getName();
		string getDescription()const;
		string getStatusString()const;
		//Mutators
		void setStatus(int);
		void setSN(int);
		void setName(string);
		void setDescription(string);	
	
	private:
		int sn;
		int status;
		string name;
		string description;
};

#endif
