#pragma once
class Integer
{
private:
	int value;
public:
	Integer() : value(0) {}
	Integer(int value) : value(value) {}

	/*Integer& operator+(Integer integer);
	Integer& operator*(Integer integer);
	Integer& operator-(Integer integer);
	Integer& operator/(Integer integer);
	Integer& operator%(Integer integer);*/

	int getValue();
	void setValue(int value);
};

