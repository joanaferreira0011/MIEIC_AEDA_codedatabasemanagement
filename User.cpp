#include "User.h"

User::User(string name, Date birth, string email) {
	// TODO - implement User::User
	throw "Not yet implemented";
}

Date User::getBirth() {
	return this->birth;
}

string User::getEmail() {
	return this->email;
}

vector<Project*> User::getProjects() {
	return this->projects;
}

string User::getName() {
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
