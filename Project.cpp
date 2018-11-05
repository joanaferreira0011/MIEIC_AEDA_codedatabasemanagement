#include "Project.h"

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

Project::Project(int id, string key, Manager manager) {
	// TODO - implement Project::Project
	throw "Not yet implemented";
}

void Project::addUser() {
	// TODO - implement Project::addUser
	throw "Not yet implemented";
}

void Project::operation() {
	// TODO - implement Project::operation
	throw "Not yet implemented";
}
