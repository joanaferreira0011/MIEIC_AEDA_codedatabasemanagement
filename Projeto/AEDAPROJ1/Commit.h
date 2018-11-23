#pragma once

#include "stdafx.h"
#include "Date.h"
class Commit {

private:
	unsigned int id;
	unsigned int volume;
	Date date;

public:
	Commit(unsigned int id, unsigned int volume, Date date);

	unsigned int getVolume();
	Date getDate();

};
