#ifndef COMPANY_H
#define COMPANY_H
#include <iostream>
#include <sstream>
#include <vector>
#include "User.h"
#include "Project.h"
using namespace std;

class Company {

private:
	string name;
	vector<User> users;

public:
	double getTotalValue() const;

	vector<double> getSalaries() const;
};

#endif
