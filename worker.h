//worker.h#pragma once
#ifndef WORKER_H
#define WORKER_H

public:
	//constructors
	Worker();
	Worker(int, double, int);
	//mutators
	void setExp();
	void setPay();
	void setSec();
	//accessors
	int getExp() const;
	double getPay() const;
	int getSec() const;
private:
	int security;
	double pay;
	int exp;// experiance
protected:



#endif
