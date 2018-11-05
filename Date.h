#ifndef DATE_H
#define DATE_H

class Date {

private:
	unsigned int day;
	unsigned int month;
	unsigned int year;
	unsigned int hour;
	unsigned int minutes;

public:
	Date(string date);

	void operator<(Date date);

	void operator==(Date date);

	void operator<(Date date);

	void operator==(Date date);
};

#endif
