#pragma once
#include "Group.h"

class Manager {
public:
	double getMaxMark(Group group);

	double getMinMark(Group group);

	double getAvgMark(Group group);

	Student getBestStudent(Group group);

	Student getWorstStudent(Group group);
};