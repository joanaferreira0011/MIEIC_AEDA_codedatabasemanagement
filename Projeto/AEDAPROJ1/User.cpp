#include "stdafx.h"
#include "User.h"


User::User(string name, string birth, string email) {
	User::name = name;
	User::birth = Date(birth);
	User::email = email;
}

Date User::getBirth() const {
	return this->birth;
}

string User::getEmail() const {
	return this->email;
}

vector<Project*> User::getProjects() const {
	return this->projects;
}

string User::getName() const {
	return this->name;
}

unsigned int User::getRanking(string projectName) const {
	// TODO - implement User::getRanking
	throw "Not yet implemented";
}

unsigned int User::getRanking(string initialDate, string finalDate) const {
	// TODO - implement User::getRanking
	throw "Not yet implemented";
}

void User::operation() {
	// TODO - implement User::operation
	throw "Not yet implemented";
}

/**
* @brief Base constructor for the manager class
* @param name - string of the manager's name
* @param birth - string of the manager's date of birth
* @param email - string of the manager's email
*/
Manager::Manager(string name, string birth, string email):User(name, birth, email){}

/**
* @brief Function to delete a branch
* @param branchName - string of the branch's name
*/
void Manager::deleteBranch(string branchName) {
	// TODO - implement Manager::deleteBranch
	throw "Not yet implemented";
}

/**
* @brief Function to merge two branches
* @param firstBranch - string of the first branch's name
* @param secondBranch - string of the second branch's name (the one to be merged)
*/
void Manager::mergeBranches(string firstBranch, string secondBranch) {
	// TODO - implement Manager::mergeBranches
	throw "Not yet implemented";
}

/**
* @brief Function to return the salary of a manager
*/
double Manager::getSalary() {
	return this->fixedSalary;
}

/**
* @brief Base constructor for the programmer class
* @param name - string of the programmer's name
* @param birth - string of the programmer's date of birth
* @param email - string of the programmer's email
*/
Programmer::Programmer(string name, string birth, string email) : User(name, birth, email){}

/**
* @brief Function to return the programmer's commits to a specific project
* @param projectID - int of the project's ID
*/
vector<Commit> Programmer::getCommits(int projectID) {
	return this->commits;
}

/**
* @brief Function to return the programmer's salary
*/
double Programmer::getSalary() {
	return -1;
}

/**
* @brief Base constructor for the manager class
* @param name - string of the junior programmer's name
* @param birth - string of the junior programmer's date of birth
* @param email - string of the junior programmer's email
*/
Junior::Junior(string name, string birth, string email) : Programmer(name, birth, email){}

/**
* @brief Function to return the junior programmer's ranking
*/
unsigned int Junior::getRanking() const{
	//return this->ranking;
	return 0;
}

/**
* @brief Function to return the junior programmer's reputation
*/
double Junior::getReputation(){
	double commitMult = 20;
	double	volMut = 1.99975;
	double nCommit = 0;
	double vol = 0;
	vector<Commit> thisCommits = this->getCommits;

	if (this->getCommits.size() >= 100) {
		nCommit = 100;
	}
	for (unsigned int i = 0; i < this->getCommits.size(); i++){
		vol += thisCommits[i].getVolume();
	}
	if (vol >= 4000) {
		vol = 4000;
	}
	return commitMult * nCommit + volMut * vol;
}

/**
* @brief Function to return the junior programmer's salary
*/
double Junior::getSalary() const {
	int mult = this->getRanking / 1000;
	double salary = 50 + 50 * mult;
}




Senior::Senior(string name, string birth, string email, double baseSalary, int NIF) : Programmer(name, birth, email) 
/**
* @brief Base constructor for the manager class
* @param name - string of the senior programmer's name
* @param birth - string of the senior programmer's date of birth
* @param email - string of the senior programmer's email
* @param email - double of the senior programmer's base salary
* @param email - int of the senior programmer's NIF
*/
{
	Senior::baseSalary = baseSalary;
	Senior::NIF = NIF;
}

/**
* @brief Function to return the senior programmer's salary
*/
double Senior::getSalary() {
	return this->baseSalary;
}