#include "stdafx.h"
#include "Commit.h"

/**
* Commit, contains the volume of the commited change and the date of creation 
* @param unsigned int id - id of the commit
* @param unsigned int volume - volume of the commit change
* @param Date date - date of the commit creation
*/
Commit::Commit(unsigned int id, unsigned int volume, Date date) {
	Commit::id = id;
	Commit::volume = volume;
	Commit::date = date;
}
/**
* returns the volume of the commit
*/
unsigned int Commit::getVolume() {
	return volume;
}
/**
* returns the date of the commit
*/
Date Commit::getDate() {
	return date;
}