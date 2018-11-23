#pragma once
#include "Branch.h"

/*
* Branch contains a name, commit list and a commit history
*/
Branch::Branch(string nameA) {
	name = nameA;
}
/*
* Add a commit to the branch
* @param Commit commit - commit to add to branch
*/
bool Branch::addCommit(Commit* commit) {
	this->commits.push_back(commit);
	this->commitsHistory.push_back(commit);
}
/*
* Remove a commit from the branch
* @param Commit commit - commit to remove from branch
*/
bool Branch::removeCommit(Commit* commit) {
	for (unsigned int i = 0; i < this->commits.size(); i++) {
		if (commit == this->commits[i]) {
			this->commits.erase(this->commits.begin() + i);
		}
	}
}

