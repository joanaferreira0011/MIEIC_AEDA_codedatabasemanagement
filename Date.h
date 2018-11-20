#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <sstream>

using namespace std;

class Date {

private:
	unsigned int day;
	unsigned int month;
	unsigned int year;
	unsigned int hour;
	unsigned int minutes;

public:
	Date(string date);

	bool operator<(Date date);

	bool operator==(Date date);

	bool operator>(Date date);

	int getDay();
	int getMonth();
	int getYear();
	int getHour();
	int getMin();
};

#endif
