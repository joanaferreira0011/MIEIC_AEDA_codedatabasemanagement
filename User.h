#ifndef USER_H
#define USER_H
#include <iostream>
#include <sstream>
#include <vector>
#include "Date.h"
#include "Project.h"

using namespace std;

class User {

private:
	string name;
	Date birth;
	string email;
	vector<Project*> projects;

public:
	User(string name, Date birth, string email);

	Date getBirth() const;

	string getEmail() const;

	//vector<Project*> addProjects() const;

	vector<Project*> getProjects() const;

	string getName() const;

	unsigned int getRanking(string projectName) const;

	unsigned int getRanking(string initialDate, string finalDate) const;

	void operation();
};

class Manager : User {

public:
	Manager(string name, Date birth, string email);

	void deleteBranch(string branchName);

	void mergeBranches(string firstBranch, string secondBranch);

};
class Programmer : User {

private:
	unsigned int reputation;
	vector<Commit> commits;

public:
	//Programmer(string name, Date birth, string email)
	//virtual ~Programmer();
	virtual double getSalary() = 0;

	vector<Commit> getCommits(int projectID);
};
class Junior : Programmer {

public:
	double getSalary() const;
	unsigned  int getRanking() const;

	Junior(string name, Date birth, string email);
};
class Senior : Programmer {
private:
	double baseSalary;
	int NIF;

public:
	Senior(string name, Date birth, string email, double baseSalary, int NIF);

	double getSalary();
};





#endif
