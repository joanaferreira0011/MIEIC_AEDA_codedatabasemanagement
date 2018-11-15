#ifndef JUNIOR_H
#define JUNIOR_H
#include "User.h"


class Junior : Programmer {


public:
	double getSalary() const;
	unsigned  int getRanking() const;

	Junior(string name, Date birth, string email);
};



#endif
