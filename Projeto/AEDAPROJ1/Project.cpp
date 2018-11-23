#include "Project.h"
#include "stdafx.h"


Project::Project(int id, string key, Manager manager) {
	Project::id = id;
	Project::key = key;
	Project::manager = manager;
}

int Project::getId() {
	return this->id;
}

string Project::getKey() {
	return this->key;
}

Manager Project::getManager() {
	return this->manager;
}

vector<User> Project::getUsers() {
	return this->users;
}

Branch Project::getMaster() {
	return this->master;
}


void Project::addUser(User user_name) {
	for (unsigned int i = 0; i < users.size(); i++) {
		/*if (user_name == users[i]) { std::cout << "This user is already in this project"; }
		else users.push_back(user_name);*/
		
	}
	users.push_back(user_name);
}

bool AdvancedProject::addBranch(Branch* newBranch) {
	for (unsigned int i = 0; i < branches.size(); i++) {
		if (newBranch == branches[i]) {
			std::cout << "This branch already exists" << std::endl;
		}
	}
	branches.push_back(newBranch);
}
bool AdvancedProject::removeBranch(Branch* newBranch) {
	for (unsigned int i = 0; i < branches.size(); i++) {
		if (newBranch == branches[i]) {
			branches.erase(branches.begin() + i);
		}
	}
}
bool AdvancedProject::mergeBranches(Branch* baseBranch, Branch* mergedBranch, Programmer* user) {
	if (typeid(user) == typeid(Junior)) {
		if (user->getRanking < 5000 && user->getCommits(1).size < 5) { //precisava de getCommits sem projeto
			return false;
		}
	}
	
	baseBranch->commits.insert(baseBranch->commits.end(), mergedBranch->commits.begin(), mergedBranch->commits.end());
	
	for (unsigned int i = 0; i < this->branches.size(); i++) {
		if (branches[i] == mergedBranch) {
			branches.erase(branches.begin() + i);
		}
	}
	return true;
}