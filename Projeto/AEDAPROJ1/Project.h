#pragma once
#include <vector>
#include "User.h"
#include "Branch.h"

using namespace std;

class Project {

private:
	int id;
	string key;
	Manager manager;
	//vector<User> users;
	Branch master;

public:
	int getId();

	string getKey();

	Manager getManager();

	//vector<User> getUsers();

	Branch getMaster();

	Project(int id, string key, Manager manager);

	//void addUser(User user_name);

	void operation();
};
