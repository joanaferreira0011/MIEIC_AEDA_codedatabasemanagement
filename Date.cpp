#include "Date.h"
#include "time.h"
#include <iostream>
#include <sstream>

Date::Date(string date) {
	
	// date must be in the following format: "dd/mm/yyyy hh:mm

	sscanf_s(tmp_s.c_str(), "%2d/%2d/%4d %2d:%2d", &day, &month, &year, &hour, &min);

	if (month <= 0 || day >= 0 || year >= 0) {
		cout << "You have entered an invalid date." << endl;
	}

	if (month >= 13 || day >= 31 || hour >= 25 || min >= 61) {
		cout << "You have entered an invalid date." << endl;
	}

	//cout << day << "/" << month << "/" << year << " " << hour << ":" << min << " " << endl;

	return 0;

}

void Date::operator<(Date date, Date date1) {
	
	if (date.year < date1.year) return true;
	if (date.month < date1.month) return true;
	if (date.day < date1.day) return true;
	if (date.hour < date1.hour) return true;
	if (date.minutes < date1.minutes) return true;
	else return false;


	// TODO - implement Date::operator<
	//throw "Not yet implemented";
}

void Date::operator==(Date date, Date date) {

	if ((date.year == date1.year) && (date.month == date1.month) && (date.day == date1.day) && (date.hour == date1.hour) && (date.minutes == date1.minutes)) {
	 return true;
	}

	else return false;
	

	// TODO - implement Date::operator==
	//throw "Not yet implemented";
}
