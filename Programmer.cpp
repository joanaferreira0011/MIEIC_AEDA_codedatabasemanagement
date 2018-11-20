#include "Programmer.h"

vector<Commit> Programmer::getCommits(int projectID) {
	return this->commits;
}

virtual double Programmer::getSalary(){
	return -1;
}
