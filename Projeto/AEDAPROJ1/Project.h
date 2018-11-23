#pragma once
#include <vector>
#include "User.h"
#include "Commit.h"

using namespace std;

class Branch {
public:
	Branch(string name);
	vector<Commit> commits;
	vector<Commit> commitsHistory;

	bool operator==(const Branch branch) const {
		return (this->commits == branch.commits) && (this->name == branch.name);
	}
private:
	string name;
};



class Project {

private:
	int id;
	string key;
	Manager manager;
	vector<User> users;
	Branch master;

public:
	Project(int id, string key, Manager manager);

	int getId();

	string getKey();

	Manager getManager();

	vector<User> getUsers();

	Branch getMaster();


	void addUser(User user_name);

};


class AdvancedProject : Project {

public:
	bool addBranch(Branch* newBranch);
	bool removeBranch(Branch* branch);
	bool mergeBranches(Branch* baseBranch, Branch* mergedBranch, Programmer* user);

private:
	vector<Branch*> branches;
};