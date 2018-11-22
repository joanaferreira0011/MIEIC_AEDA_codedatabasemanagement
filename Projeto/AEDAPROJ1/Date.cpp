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
	/**
	* The date must be in the following format: "dd/mm/yyyy hh:mm"
	* @param date a string of a date
	*/



	sscanf_s(date.c_str(), "%2d/%2d/%4d %2d:%2d", &day, &month, &year, &hour, &minutes); //! The scan function reads the date string and stores the date values 

	if (month <= 0 || day >= 0 || year >= 0) {
		throw InvalidDate();						//! Throw an error due to an invalid date
	}

	if (month >= 13 || day >= 32 || hour >= 25 || minutes >= 61) {
		throw InvalidDate();			//! Throw an error due to an invalid date
	}

	
}

bool Date::operator<(Date date) {
	/**
	* Operator to compare dates
	* @param date an object date
	*/

	if (this->year < date.year) return true;
	else if (this->month < date.month) return true;
	else if (this->day < date.day) return true;
	else if (this->hour < date.hour) return true;
	else if (this->minutes < date.minutes) return true;
	else return false;
}

bool Date::operator>(Date date) {
	/**
	* Operator to compare dates
	* @param date an object date
	*/

	if (this->year > date.year) return true;
	else if (this->month > date.month) return true;
	else if (this->day > date.day) return true;
	else if (this->hour > date.hour) return true;
	else if (this->minutes > date.minutes) return true;
	else return false;
}


bool Date::operator==(Date date) {
	/**
	* Operator to compare dates
	* @param date an object date
	*/

	if ((date.year == this->year) && (date.month == this->month) && (date.day == this->day) && (date.hour == this->hour) && (date.minutes == this->minutes)) {
		return true;
	}

	else return false;

}

int Date::getDay() { 
	/**
	* Method to return the day
	*/
	return this->day; 
}

int Date::getMonth() { 
	/**
	* Method to return the month
	*/
	return this->month; 
}

int Date::getYear() { 
	/**
	* Method to return the year
	*/
	return this->year; 
}

int Date::getHour() { 
	/**
	* Method to return the hour
	*/
	return this->hour; 
}

int Date::getMin() { 
	/**
	* Method to return the minutes
	*/
	return this->minutes; 
}


