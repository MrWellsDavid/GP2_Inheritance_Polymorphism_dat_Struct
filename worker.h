//worker.h

#include "user.h"
using namespace std;

#ifndef WORKER_H
#define WORKER_H

class worker: public user {
	public:
		//constructors
		worker();
		worker(string, string, int, int);
		//mutators
		void setExp(int);
		void setPay(int);
		void setSec(int);
		//accessors
		int getExp() const;
		double getPay() const;
		int getSec() const;
	private:
		int security;
		double pay;
		int exp;// experiance
	protected:
		
};

#endif
