#ifndef SENIOR_H
#define SENIOR_H
#include "User.h"


class Senior : Programmer {

private:
	double baseSalary;
	int NIF;

public:
	Senior(string name, Date birth, string email, double baseSalary, int NIF);

	double getSalary();
};

#endif
