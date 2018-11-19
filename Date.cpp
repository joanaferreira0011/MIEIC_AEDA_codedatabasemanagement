#include "Date.h"
#include "time.h"
#include <iostream>
#include <sstream>

Date::Date(string date) {
	
	// date must be in the following format: "dd/mm/yyyy hh:mm

	sscanf_s(date.c_str(), "%2d/%2d/%4d %2d:%2d", &day, &month, &year, &hour, &minutes);

	if (month <= 0 || day >= 0 || year >= 0) {
		cout << "You have entered an invalid date." << endl;
	}

	if (month >= 13 || day >= 31 || hour >= 25 || minutes >= 61) {
		cout << "You have entered an invalid date." << endl;
	}

	// If you want to display the date uncomment the following code:
	//else cout << day << "/" << month << "/" << year << " " << hour << ":" << min << " " << endl;

}

bool Date::operator<(Date date) {
	
	if (this->year < date.year) return true;
	else if (this->month < date.month) return true;
	else if (this->day < date.day) return true;
	else if (this->hour < date.hour) return true;
	else if (this->minutes < date.minutes) return true;
	else return false;
}

bool Date::operator>(Date date) {

	if (this->year > date.year) return true;
	else if (this->month > date.month) return true;
	else if (this->day > date.day) return true;
	else if (this->hour > date.hour) return true;
	else if (this->minutes > date.minutes) return true;
	else return false;
}


void Date::operator==(Date date) {

	if ((date.year == this->year) && (date.month == this->month) && (date.day == this->day) && (date.hour == this->hour) && (date.minutes == this->minutes)) {
		return true;
	}

	else return false;
	
}
