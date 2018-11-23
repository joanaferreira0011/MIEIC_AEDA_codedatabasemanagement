#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class Error
{
private:
	int error;
public:
	
	Error(int error);
	~Error();
};

