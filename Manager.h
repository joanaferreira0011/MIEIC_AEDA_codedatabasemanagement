#ifndef MANAGER_H
#define MANAGER_H

class Manager : User {


public:
	void deleteBranch(string branchName);

	void mergeBranches(string firstBranch, string secondBranch);
};

#endif
