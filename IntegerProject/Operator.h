#pragma once
#include "Integer.h"

Integer operator+(Integer int1, Integer int2) {
	return Integer(int1.getValue() + int2.getValue());
}

Integer operator*(Integer int1, Integer int2) {
	return Integer(int1.getValue() * int2.getValue());
}

Integer operator/(Integer int1, Integer int2) {
	return Integer(int1.getValue() / int2.getValue());
}

Integer operator-(Integer int1, Integer int2) {
	return Integer(int1.getValue() - int2.getValue());
}

Integer operator+(Integer integer) {
	return Integer(-integer.getValue());
}