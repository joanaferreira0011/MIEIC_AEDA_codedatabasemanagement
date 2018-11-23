#include "stdafx.h"
#include "Error.h"
#include <iostream>

using namespace std;

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
