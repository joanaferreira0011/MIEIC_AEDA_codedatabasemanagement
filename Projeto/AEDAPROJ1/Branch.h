#pragma once

#include "stdafx.h"
#include <vector>
#include "Commit.h"

using namespace std;

class Branch {
public:
	Branch(string name);
	vector<Commit*> commits;
	vector<Commit*> commitsHistory;

	bool operator==(const Branch branch) const {
		return (this->commits == branch.commits) && (this->name == branch.name);
	}
	bool addCommit(Commit* commit);
	bool removeCommit(Commit* commit);
private:
	string name;
};


