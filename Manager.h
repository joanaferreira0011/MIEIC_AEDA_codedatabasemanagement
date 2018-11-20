#ifndef MANAGER_H
#define MANAGER_H
#include "User.h"
#include "Date.h"
using namespace std;

class Manager : User {


public:
	Manager(string name, Date birth, string email);

	void deleteBranch(string branchName);

	void mergeBranches(string firstBranch, string secondBranch);
};

#endif
