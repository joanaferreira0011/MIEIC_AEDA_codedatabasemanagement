#ifndef BRANCH_H
#define BRANCH_H

class Branch {

private:
	vector<Commit> commits;
	vector<Commit> commitsHistory;
	string name;
};

#endif
