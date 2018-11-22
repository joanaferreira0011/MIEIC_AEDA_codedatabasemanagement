#ifndef PROJECT_H
#define PROJECT_H
#include "User.h"
#include <vector>







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

class AdvancedProject : Project {

public:
	void addBranch(Branch newBranch) {
		for (unsigned int i = 0; i < branches.size(); i++) {
			if (newBranch == branches[i]) {
				std::cout << "This branch already exists" << std::endl;
			}
		}
		branches.push_back(newBranch);
	}

private:
	vector<Branch> branches;
};


class Branch {

private:
	vector<Commit> commits;
	vector<Commit> commitsHistory;
	string name;
public:
	Branch(string name);
};

class Commit {

private:
	unsigned int id;
	unsigned int volume;
	Date date;

public:
	Commit(unsigned int id, unsigned int volume, Date date);
};

#endif
