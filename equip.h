//equip.h
#include <string>

#ifndef EQUIP_H
#define EQUIP_H
using namespace std;

class equip {
	public:
		equip();
		int getSN()const;
		int getStatus()const;
		string getSNString()const;
		string getName()const;
		string getDescription()const;
		string getStatusString()const;
		void setStatus(int);
		void setSN(int);
		void setName(string);
		void setDescription(string);	
	
	private:
	
		
	protected:	
		int sn;
		int status;
		string name;
		string description;
};

#endif
