#include "Integer.h"

int Integer::getValue() { return value; }
void Integer::setValue(int value) { this->value = value; }

//Integer& Integer::operator+(Integer integer) {
//	int v = value + integer.getValue();
//	return Integer(v);
//}
//
//Integer& Integer::operator*(Integer integer) {
//	Integer result(value * integer.getValue());
//	return result;
//}
//
//Integer& Integer::operator-(Integer integer) { 
//	Integer result(value - integer.getValue());
//	return result;
//}
//
//Integer& Integer::operator/(Integer integer) {
//	Integer result(value / integer.getValue());
//	return result;
//}
//
//Integer& Integer::operator%(Integer integer) {
//	Integer result(value % integer.getValue());
//	return result;
//}

