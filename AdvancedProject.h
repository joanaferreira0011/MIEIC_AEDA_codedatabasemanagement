#ifndef ADVANCEDPROJECT_H
#define ADVANCEDPROJECT_H
#include "Branch.h"
#include "iostream"
#include "Project.h"

using namespace std;

class AdvancedProject : Project {

public:
	void addBranch(Branch newBranch) {
		for (unsigned int i = 0; i < branches.size(); i++){
			if (newBranch == branches[i]) {
				std::cout << "This branch already exists" << std::endl;
			}
		}
		branches.push_back(newBranch);
	}
			
private:
	vector<Branch> branches;
};

#endif
