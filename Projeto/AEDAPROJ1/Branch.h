#pragma once

#include "stdafx.h"
#include <vector>
#include "Commit.h"

using namespace std;

class Branch {

private:
	vector<Commit> commits;
	vector<Commit> commitsHistory;
	string name;
};


