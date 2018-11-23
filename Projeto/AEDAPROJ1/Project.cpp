#include "Project.h"
#include "stdafx.h"
#include <time.h>

/**
* @brief generates a unique Key 16 Char 0-9, a-z, A-Z
*/
string Project::generateKey() {
	string randomKey = "";
	srand(time(NULL));
	vector<char> allowedChars = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	for (int i = 0; i < 8; i++) {
		randomKey += allowedChars[rand() % allowedChars.size()];
	}
}

/**
* @class Project
* @param int idA - Project id
* @param Manager* managerA - Manager of the project
*/
Project::Project(int idA, Manager* managerA) {
	id = idA;
	key = Project::generateKey();
	manager = managerA;
}
/*
* returns the project id
*/
int Project::getId() {
	return this->id;
}

/*
* returns the project key
*/
string Project::getKey() {
	return this->key;
}

/*
* returns the manager of the project
*/
Manager* Project::getManager() {
	return this->manager;
}

/*
* returns an array of the project's users
*/
vector<User*> Project::getUsers() {
	return this->users;
}

/*
* returns the master branch of the project
*/
Branch Project::getMaster() {
	return this->master;
}

/**
* Adds a user to the project
* @param User - user to add
*/
void Project::addUser(User* user) {
	for (unsigned int i = 0; i < users.size(); i++) {
		if (user == users[i]) { std::cout << "This user is already in this project"; return; }
		
	}
	users.push_back(user);
}

/**
* @class AdvancedProject
* @param int idA - Project id
* @param Manager* managerA - Manager of the project
*/
AdvancedProject::AdvancedProject(int idA, Manager* managerA) : Project(idA, managerA) {

};


/**
* @brief Adds a branch to the project
* @param Branch newBranch - branch to add
*/
bool AdvancedProject::addBranch(Branch* newBranch) {
	for (unsigned int i = 0; i < branches.size(); i++) {
		if (newBranch == branches[i]) {
			std::cout << "This branch already exists" << std::endl;
		}
	}
	branches.push_back(newBranch);
}

/**
* @brief Remove a branch from the project
* @param branch branch - branch to remove
*/
bool AdvancedProject::removeBranch(Branch* branch) {
	for (unsigned int i = 0; i < branches.size(); i++) {
		if (branch == branches[i]) {
			branches.erase(branches.begin() + i);
		}
	}
}
/**
* Merges two branches of the project
* @param Branch* baseBranch - branch to merge into
* @param Branch* mergedBranch - branch to be merged
* @param Programmer* user - user that removes the branch
*/
bool AdvancedProject::mergeBranches(Branch* baseBranch, Branch* mergedBranch, Programmer* user) {
	if (typeid(user) == typeid(Junior)) {
		if (user->getRanking < 5000 || user->getCommits(1).size < 5) { //precisava de getCommits sem projeto
			return false;
		}
	}
	
	baseBranch->commits.insert(baseBranch->commits.end(), mergedBranch->commits.begin(), mergedBranch->commits.end());
	baseBranch->commitsHistory.insert(baseBranch->commitsHistory.end(), mergedBranch->commitsHistory.begin(), mergedBranch->commitsHistory.end());
	for (unsigned int i = 0; i < this->branches.size(); i++) {
		if (branches[i] == mergedBranch) {
			branches.erase(branches.begin() + i);
		}
	}
	return true;
}
