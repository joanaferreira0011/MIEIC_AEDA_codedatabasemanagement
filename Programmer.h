#ifndef PROGRAMMER_H
#define PROGRAMMER_H
#include <iostream>
#include <sstream>
#include <vector>
#include "Commit.h"
#include "User.h"

class Programmer:User{

private:
	unsigned int reputation;
	vector<Commit> commits;

public:
	virtual double getSalary() = 0;

	vector<Commit> getCommits(int projectID);
};

#endif
