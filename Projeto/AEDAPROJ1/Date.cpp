#include "stdafx.h"
#include "Date.h"

Date::Date() {
	this->day = 1;
	this->month = 1;
	this->year = 1;
	this->hour = 1;
	this->minutes = 1;
}

/**
* @brief Constructor for the date class (The date must be in the following format: "dd/mm/yyyy hh:mm")
* @param date - string that represents the date
*/
Date::Date(string date) {

	sscanf_s(date.c_str(), "%2d/%2d/%4d %2d:%2d", &day, &month, &year, &hour, &minutes); // The scan function reads the date string and stores the date values 

	if (month <= 0 || day >= 0 || year >= 0) {
		throw Error(1);				//! Throw an error due to an invalid date
	}

	if (month >= 13 || day >= 32 || hour >= 25 || minutes >= 61) {
		throw Error(1);			//! Throw an error due to an invalid date
	}

	
}

/**
* @brief Operator to compare dates
* @param date - object of the class Date
*/
bool Date::operator<(Date date) {

	if (this->year < date.year) return true;
	else if (this->month < date.month && this->year == date.year) return true;
	else if (this->day < date.day && this->month == date.month && this->year == date.year) return true;
	else if (this->hour < date.hour && this->day == date.day && this->month == date.month && this->year == date.year) return true;
	else if (this->minutes < date.minutes && this->hour == date.hour && this->day == date.day && this->month == date.month && this->year == date.year) return true;
	else return false;
}

/**
* @brief Operator to compare dates
* @param date - object of the class Date
*/
bool Date::operator>(Date date) {

	if (this->year > date.year) return true;
	else if (this->month > date.month && this->year == date.year) return true;
	else if (this->day > date.day && this->month == date.month && this->year == date.year) return true;
	else if (this->hour > date.hour && this->day == date.day && this->month == date.month && this->year == date.year) return true;
	else if (this->minutes > date.minutes && this->hour == date.hour && this->day == date.day && this->month == date.month && this->year == date.year) return true;
	else return false;
}


/**
* @brief Operator to compare dates
* @param date - object of the class Date
*/
bool Date::operator==(Date date) {

	if ((date.year == this->year) && (date.month == this->month) && (date.day == this->day) && (date.hour == this->hour) && (date.minutes == this->minutes)) {
		return true;
	}

	else return false;

}

/**
* @brief Function to return the day
*/
int Date::getDay() { 
	return this->day; 
}

/**
* @brief Function to return the month
*/
int Date::getMonth() { 
	return this->month; 
}

/**
* @brief Function to return the year
*/
int Date::getYear() { 
	return this->year; 
}

/**
* @brief Function to return the hour
*/
int Date::getHour() { 
	return this->hour; 
}

/**
* @brief Function to return the minutes
*/
int Date::getMin() { 
	return this->minutes; 
}
