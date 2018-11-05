#ifndef PROGRAMMER_H
#define PROGRAMMER_H

class Programmer : User {

private:
	unsigned int reputation;
	vector<Commit> commits;

public:
	virtual void getSalary() = 0;

	void getCommits(int projectID);
};

#endif
