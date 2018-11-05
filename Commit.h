#ifndef COMMIT_H
#define COMMIT_H

class Commit {

private:
	unsigned int id;
	unsigned int volume;
	Date date;

public:
	Commit(unsigned int id, unsigned int volume);
};

#endif
