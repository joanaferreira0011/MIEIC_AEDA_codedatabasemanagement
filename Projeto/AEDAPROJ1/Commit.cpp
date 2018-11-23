#include "stdafx.h"
#include "Commit.h"


Commit::Commit(unsigned int id, unsigned int volume, Date date) {
	Commit::id = id;
	Commit::volume = volume;
	Commit::date = date;
}