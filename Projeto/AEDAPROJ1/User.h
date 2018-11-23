#pragma once
#include <vector>
#include "Date.h"
#include "Project.h"
#include "Branch.h"
#include "Commit.h"

using namespace std;

class User {

private:
	string name;
	Date birth;
	string email;

public:
	vector<Project*> projects;

	User(string name, string birth, string email);

	Date getBirth() const;

	string getEmail() const;

	string getName() const;

	vector<Project*> addProject(Project* project);

	vector<Project*> getProjects() const;

	virtual double getSalary() {
		return -1;
	}
	virtual bool hasPermission() {
		return false;
	}
};

class Manager : User {
private:
	double fixedSalary = 4750;
public:
	Manager(string name, string birth, string email);

	double getSalary();

	bool hasPermission();

};
class Programmer : User {

private:
	unsigned int reputation;
	vector<Commit> commits;

public:
	Programmer(string name, string birth, string email);
	double getSalary() = 0;

	bool hasPermission();

	virtual double getReputation() {
		return 0;
	}

	vector<Commit> getCommits(int projectID);


	unsigned int getRanking(int projectid) const;

	unsigned int getRanking(string initialDate, string finalDate) const;
};


class Junior : Programmer {
private:
	double reputation;
public:
	double getSalary() const;
	unsigned  int getRanking() const;
	double getReputation();
	bool hasPermission();

	Junior(string name, string birth, string email);
};


class Senior : Programmer {
private:
	double baseSalary;
	int NIF;

public:
	Senior(string name, string birth, string email, double baseSalary, int NIF);
	bool hasPermission();
	double getSalary();
	double getReputation();
};
