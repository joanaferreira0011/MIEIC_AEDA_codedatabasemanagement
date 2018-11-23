#pragma once
#include <vector>
#include "Project.h"
#include "Date.h"

using namespace std;

class User {

private:
	string name;
	Date birth;
	string email;
	vector<Project*> projects;

public:
	User() {

	}
	User(string name, string birth, string email);

	Date getBirth() const;

	string getEmail() const;

	//vector<Project*> addProjects() const;

	vector<Project*> getProjects() const;

	string getName() const;

	unsigned int getRanking(string projectName) const;

	unsigned int getRanking(string initialDate, string finalDate) const;

	void operation();

	virtual double getSalary() {
		return -1;
	}
};



class Programmer : public User {

private:
	unsigned int reputation;
	vector<Commit> commits;

public:
	Programmer(string name, string birth, string email);
	//virtual ~Programmer();
	double getSalary() = 0;

	vector<Commit> getCommits(int projectID);
};



class Junior : public Programmer {
private:
	int ranking;
public:
	double getSalary() const;
	unsigned  int getRanking() const;

	Junior(string name, string birth, string email, int ranking);
};



class Senior : public Programmer {
private:
	double baseSalary;
	int NIF;

public:
	Senior(string name, string birth, string email, double baseSalary, int NIF);

	double getSalary();
};



class Manager : public User {
private:
	double salary = 4750;
public:

	void deleteBranch(string branchName);

	void mergeBranches(string firstBranch, string secondBranch);

	double getSalary();

};