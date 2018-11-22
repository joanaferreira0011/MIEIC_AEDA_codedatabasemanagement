#include "stdafx.h"
#include "Date.h"

Date::Date() {
	this->day = 1;
	this->month = 1;
	this->year = 1;
	this->hour = 1;
	this->minutes = 1;
}

Date::Date(string date) {

	// date must be in the following format: "dd/mm/yyyy hh:mm

	sscanf_s(date.c_str(), "%2d/%2d/%4d %2d:%2d", &day, &month, &year, &hour, &minutes);

	if (month <= 0 || day >= 0 || year >= 0) {
		//throw InvalidDate();
	}

	if (month >= 13 || day >= 32 || hour >= 25 || minutes >= 61) {
		//throw InvalidDate();
	}

	// If you want to display the date remove the comment of the following code:
	//else cout << day << "/" << month << "/" << year << " " << hour << ":" << minutes << " " << endl;

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


bool Date::operator==(Date date) {

	if ((date.year == this->year) && (date.month == this->month) && (date.day == this->day) && (date.hour == this->hour) && (date.minutes == this->minutes)) {
		return true;
	}

	else return false;

}

int Date::getDay() { return this->day; }
int Date::getMonth() { return this->month; }
int Date::getYear() { return this->year; }
int Date::getHour() { return this->hour; }
int Date::getMin() { return this->minutes; }

