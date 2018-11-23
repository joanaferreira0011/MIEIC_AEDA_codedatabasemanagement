#pragma once
#include <vector>
#include "Branch.h"
#include "User.h"
using namespace std;


class Project {

private:
	int id;
	string key;
	Manager* manager;
	vector<User*> users;
	Branch master;

public:
	Project(int idA, Manager* managerA);

	int getId();

	string getKey();

	Manager* getManager();


	vector<User*> getUsers();

	Branch getMaster();

	void addUser(User* user_name);

	static string generateKey();
};


class AdvancedProject : public Project {

public:
	AdvancedProject(int idA, Manager* managerA);
	bool addBranch(Branch* newBranch, User* user);
	bool removeBranch(Branch* branch, User* user);
	bool mergeBranches(Branch* baseBranch, Branch* mergedBranch, User* user);

private:
	vector<Branch*> branches;
};

