#include "Junior.h"

Junior::Junior(string name, Date birth, string email) : User(name, birth, email) {}

unsigned int getRanking() {
	User::getRanking();
}

double Junior::getSalary() {
	// TODO - implement Junior::getSalary
	throw "Not yet implemented"
}
