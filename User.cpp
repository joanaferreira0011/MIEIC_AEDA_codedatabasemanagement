#include "User.h"

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
