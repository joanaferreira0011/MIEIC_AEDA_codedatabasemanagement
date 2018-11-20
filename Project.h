#ifndef PROJECT_H
#define PROJECT_H
#include "User.h"
#include "Manager.h"
#include "Branch.h"
#include <vector>;


class Project {

private:
	int id;
	string key;
	Manager manager;
	vector<User> users;
	Branch master;

public:
	int getId();

	string getKey();

	Manager getManager();

	vector<User> getUsers();

	Branch getMaster();

	Project(int id, string key, Manager manager);

	void addUser(User user_name);

	void operation();
};

#endif
