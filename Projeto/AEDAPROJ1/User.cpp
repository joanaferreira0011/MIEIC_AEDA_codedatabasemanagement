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




Manager::Manager(string name, string birth, string email):User(name, birth, email)
{}
void Manager::deleteBranch(string branchName) {
	// TODO - implement Manager::deleteBranch
	throw "Not yet implemented";
}

void Manager::mergeBranches(string firstBranch, string secondBranch) {
	// TODO - implement Manager::mergeBranches
	throw "Not yet implemented";
}

double Manager::getSalary() {
	return this->fixedSalary;
}

Programmer::Programmer(string name, string birth, string email) : User(name, birth, email) {}

vector<Commit> Programmer::getCommits(int projectID) {
	return this->commits;
}

double Programmer::getSalary() {
	return -1;
}

Junior::Junior(string name, string birth, string email) : Programmer(name, birth, email) {
}

unsigned int Junior::getRanking() const{
	return this->ranking;
}

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