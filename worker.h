//worker.h#pragma once
#ifndef WORKER_H
#define WORKER_H

class worker {
	public:
		//constructors
		worker();
		worker(int, double, int);
		//mutators
		void setExp(int);
		void setPay(double);
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
