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

string User::getName() const {
	return this->name;
}

/**
* @brief Returns all the projects of an User
*/
vector<Project*> User::getProjects() const {
	return this->projects;
}
/**
* @brief adds a project to an User
*/
vector<Project*> User::addProject(Project* project) {
	projects.push_back(project);
	return projects;
}


/**
* @brief Base constructor for the manager class
* @param name - string of the manager's name
* @param birth - string of the manager's date of birth
* @param email - string of the manager's email
*/
Manager::Manager(string name, string birth, string email):User(name, birth, email){}

/**
* @brief Function to return the salary of a manager
*/
double Manager::getSalary() {
	return this->fixedSalary;
}

/**
* @brief Function to return a boolean of the users permissions
*/
bool Manager::hasPermission() {
	return true;
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
* @brief Function to return a boolean of the users permissions
*/
bool Programmer::hasPermission() {
	return false;
}



unsigned int Programmer::getRanking(int projectid) const {
	vector<User*> programmers;
	for (int i = 0; i < projects.size(); i++) {
		if (projects[i]->getId == projectid) {
			/*
			Should order the users of the project by rank volume contributions and return the position of the user that calls the method
			*/
			programmers = projects[i]->getUsers();
		}
	}
}

unsigned int Programmer::getRanking(string initialDate, string finalDate) const {
	// TODO - implement User::getRanking
	throw "Not yet implemented";
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

/**
* @brief Function to return a boolean of the users permissions
*/
bool Junior::hasPermission() {
	if (this->getReputation() > 3000) {
		return true;
	}
	return false;
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

/**
* @brief Function to return a boolean of the users permissions
*/
bool Senior::hasPermission() {
	return true;
}

/**
* @brief Function to return the senior programmer's reputation
*/
double Senior::getReputation() {
	double commitMult = 20;
	double	volMut = 1.99975;
	double nCommit = 0;
	double vol = 0;
	vector<Commit> thisCommits = this->getCommits;

	if (this->getCommits.size() >= 100) {
		nCommit = 100;
	}
	for (unsigned int i = 0; i < this->getCommits.size(); i++) {
		vol += thisCommits[i].getVolume();
	}
	if (vol >= 4000) {
		vol = 4000;
	}
	return commitMult * nCommit + volMut * vol * 2;
}