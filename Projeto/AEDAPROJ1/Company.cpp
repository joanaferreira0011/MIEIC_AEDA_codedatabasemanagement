#include "Company.h"

/**
* @brief Company class constructor with users
* @param name - company's name
* @param users - vector with all users in the company
*/
Company:: Company(string name, vector<*User> users)
{
	Company::name=name;
	Company::users= users;
}

/**
* @brief Company class constructor
* @param name - company's name
*/
Company:: Company(string name)
{
	Company::name=name;
}

/**
* @brief Adds a user to the company
* @param user - pointer to user to add
*/
void Company::addUser(User* user){
	users.push_back(user);
}

/**
* @brief Removes a user from the company, returns 1 if user is not in the company
* @param user - name of the user to remove
*/
int Company::removeUser(string user){
	for(size_t i =0; i<users.size(); i++)
	{
		if(users.at(i)->getName()== user){
			users.erase(users.begin()+i);
			return 0;
		}
	}
	return 1;
}

/**
* @brief Returns the sum of all salaries
*/
double Company::getTotalValue() const {
	totalValue=0;
	for(auto&user : users)
	{
		totalValue += user->getSalary;
	}
	return totalValue;
}

/**
* @brief Returns a vector with all the salaries
*/
vector<double> Company::getSalaries() const {
	vector<double> salaries;
	for(auto&user: users)
	{
		salaries.push_back(user->getSalary);
	}
	sort(salaries.begin(), salaries.end());

	return salaries;
}
