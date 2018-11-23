#include "stdafx.h"
#include "User.h"


User::User(string nameA, string birthA, string emailA) {
	name = nameA;
	birth = Date(birthA);
	email = emailA;
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



void Manager::deleteBranch(string branchName) {
	// TODO - implement Manager::deleteBranch
	throw "Not yet implemented";
}

void Manager::mergeBranches(string firstBranch, string secondBranch) {
	// TODO - implement Manager::mergeBranches
	throw "Not yet implemented";
}

double Manager::getSalary() {
	return this->salary;
}



vector<Commit> Programmer::getCommits(int projectID) {
	return this->commits;
}

double Programmer::getSalary() {
	return -1;
}

Junior::Junior(string name, string birth, string email, int ranking) : Programmer(name, birth, email) {
	Junior::ranking = ranking;
}

unsigned int Junior::getRanking() const {
	return this->ranking;
}

double Junior::getSalary() const {
	int mult = this->getRanking / 1000;
	double salary = 50 + 50 * mult;
}




Senior::Senior(string name, string birth, string email, double baseSalary, int NIF) : Programmer(name, birth, email) {
	Senior::baseSalary = baseSalary;
	Senior::NIF = NIF;
}

double Senior::getSalary() {
	return this->baseSalary;
}