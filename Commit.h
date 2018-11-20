#ifndef COMMIT_H
#define COMMIT_H
#include "Date.h"
class Commit {

private:
	unsigned int id;
	unsigned int volume;
	Date date;

public:
	Commit(unsigned int id, unsigned int volume, Date date);
};

#endif

