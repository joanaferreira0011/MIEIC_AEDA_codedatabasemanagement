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
	vector<User*> users;

public:
	Company(string name, vector<User> users);
	Company(string name);
	void addUser(User* user);
	int removeUser(string user);
	double getTotalValue() const;
	vector<double> getSalaries() const;
};

#endif
