//parts.h

#include "equip.h"
using namespace std;

#ifndef PARTS_H
#define PARTS_H

class parts: public equip {
	public:
		//constructors
		parts();
		parts(double);
		
		//mutators
		void setPrice(double);
		
		//accessors
		double getPrice() const;
	
	private:
		double price;
};




#endif
