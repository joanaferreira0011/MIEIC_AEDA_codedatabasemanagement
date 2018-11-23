#include "Company.h"

Company:: Company(string name, vector<*User> users)
{
	Company::name=name;
	Company::users= users;
}

Company:: Company(string name)
{
	Company::name=name;
}

void Company::addUser(User* user){
	users.push_back(user);
}

double Company::getTotalValue() const {
	totalValue=0;
	for(auto&user : users)
	{
		totalValue += user->getSalary;
	}
	return totalValue;
}

vector<double> Company::getSalaries() const {
	vector<double> salaries;
	for(auto&user: users)
	{
		salaries.push_back(user->getSalary);
	}
	sort(salaries.begin(), salaries.end());

	return salaries;
}
