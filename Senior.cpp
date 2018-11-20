#include "Senior.h"

Senior::Senior(string name, Date birth, string email, double baseSalary, int NIF) : User(name, birth, email) {
	Senior::baseSalary = baseSalary;
	Senior::NIF = NIF;
}

double Senior::getSalary() {
	return this->baseSalary;
}
