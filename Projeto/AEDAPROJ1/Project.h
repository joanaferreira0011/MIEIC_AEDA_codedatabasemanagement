#pragma once
#include <vector>
#include "Branch.h"
#include "User.h"
using namespace std;


class Project {

private:
	int id;
	string key;
	Manager manager;
	vector<User*> users;
	Branch master;

public:
	Project(int id, Manager manager);

	int getId();

	string getKey();

	Manager getManager();


	vector<User*> getUsers();

	Branch getMaster();

	void addUser(User* user_name);

	static string generateKey();
};


class AdvancedProject : public Project {

public:
	AdvancedProject(int id, string key, Manager manager);
	bool addBranch(Branch* newBranch);
	bool removeBranch(Branch* branch);
	bool mergeBranches(Branch* baseBranch, Branch* mergedBranch, Programmer* user);

private:
	vector<Branch*> branches;
};

