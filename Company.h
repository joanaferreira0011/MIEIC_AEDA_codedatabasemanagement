#ifndef COMPANY_H
#define COMPANY_H

class Company {

private:
	string name;
	vector<User> users;

public:
	double getTotalValue() const;

	vector<double> getSalaries() const;
};

#endif
