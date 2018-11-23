#pragma once
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
	User(string name, string birth, string email);

	Date getBirth() const;

	string getEmail() const;

	//vector<Project*> addProjects() const;

	vector<Project*> getProjects() const;

	string getName() const;

	unsigned int getRanking(string projectName) const;

	unsigned int getRanking(string initialDate, string finalDate) const;

	virtual double getSalary() {
		return -1;
	}
};

class Manager : public User {
private:
	double fixedSalary = 4750;
public:
	Manager(string name, string birth, string email);

	double getSalary();

};
class Programmer : public User {

private:
	unsigned int reputation;
	vector<Commit> commits;

public:
	Programmer(string name, string birth, string email);
	double getSalary() = 0;

	vector<Commit> getCommits(int projectID);
};
class Junior : public Programmer {
private:
	double reputation;
public:
	double getSalary() const;
	unsigned  int getRanking() const;
	double getReputation();

	Junior(string name, string birth, string email);
};
class Senior : public Programmer {
private:
	double baseSalary;
	int NIF;

public:
	Senior(string name, string birth, string email, double baseSalary, int NIF);

	double getSalary();
};