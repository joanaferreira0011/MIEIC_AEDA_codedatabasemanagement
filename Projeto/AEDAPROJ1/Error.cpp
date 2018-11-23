#include "Error.h"

/**
* @brief Exception class that handles errors for Date
* @param error - int to indicate what error occurred
*/
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
