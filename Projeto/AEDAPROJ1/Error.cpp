#include "Error.h"

Error::Error(int error)
{
	switch (error){

	case 1:
		cout << "Invalid Date" << endl;
		break;
	default:
		break;
	}
}


Error::~Error()
{
}
