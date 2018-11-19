#ifndef ADVANCEDPROJECT_H
#define ADVANCEDPROJECT_H
#include "Branch.h"
#include "iostream"

using namespace std;

class AdvancedProject : Project {

public:
	void addBranch(Branch newBranch) {
		for (unsigned int i = 0; i < branches.length(); i++){
			if (newBranch == branches[i]) {
				std::cout << "This branch already exists" << std::endl;
			}
		}
		branches.push(newBranch);
	}
			
private:
	vector<Branch> branches;
};

#endif
