#include "User.h"
#include "stdafx.h"



User::User(string name, Date birth, string email) {
	User::name = name;
	User::birth = birth;
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




Manager::Manager(string name, Date birth, string email) : User(name, birth, email)
{}
void Manager::deleteBranch(string branchName) {
	// TODO - implement Manager::deleteBranch
	throw "Not yet implemented";
}

void Manager::mergeBranches(string firstBranch, string secondBranch) {
	// TODO - implement Manager::mergeBranches
	throw "Not yet implemented";
}



vector<Commit> Programmer::getCommits(int projectID) {
	return this->commits;
}

virtual double Programmer::getSalary() {
	return -1;
}




Junior::Junior(string name, Date birth, string email) : User(name, birth, email) {}

unsigned int getRanking() {
	//return User::getRanking();
	return 0;
}

double Junior::getSalary() const {
	// TODO - implement Junior::getSalary
	throw "Not yet implemented";
}




Senior::Senior(string name, Date birth, string email, double baseSalary, int NIF) : Programmer(name, birth, email) {
	Senior::baseSalary = baseSalary;
	Senior::NIF = NIF;
}

double Senior::getSalary() {
	return this->baseSalary;
}
