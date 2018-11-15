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
	Project::id = id;
	Project::key = key;
	Project::manager = manager;
}

void Project::addUser(User user_name) {
	for (unsigned int i = 0; i < users.length(); i++){
		if (user_name == users[i]) {std::cout << "This user is already in this project"}
		else users.push(user_name)
	}
}

void Project::operation() {
	// TODO - implement Project::operation
	throw "Not yet implemented";
}
