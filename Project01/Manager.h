#pragma once
#include "Student.h"

class Manager {
public:
	double getMaxMark(Student* list, int length);

	double getMinMark(Student* list, int length);

	double getAvgMark(Student* list, int length);

	Student getBestStudent(Student* list, int length);

	Student getWorstStudent(Student* list, int length);
};