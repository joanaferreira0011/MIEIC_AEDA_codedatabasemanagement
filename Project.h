#ifndef PROJECT_H
#define PROJECT_H

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

	void addUser();

	void operation();
};

#endif
