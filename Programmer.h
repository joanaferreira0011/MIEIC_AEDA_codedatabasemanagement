#ifndef PROGRAMMER_H
#define PROGRAMMER_H
#include <iostream>
#include <vector>
#include "Commit.h"
#include "User.h"
using namespace std;

class Programmer : User {

private:
	unsigned int reputation;
	vector<Commit> commits;

public:
	virtual ~Programmer();
	virtual double getSalary() = 0;

	vector<Commit> getCommits(int projectID);
};

#endif
