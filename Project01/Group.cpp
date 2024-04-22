#include "Group.h"

void Group::add(Student st) {
	if (size == 0) {
		list = new Student[1];
		*list = st;
	}
	else {
		Student* temp = new Student[size + 1];

		for (int i = 0; i < size; i++)
		{
			*(temp + i) = *(list + i);
		}

		temp[size] = st;

		delete[] list;

		list = temp;
	}
	size++;
}

void Group::remove(int index) {
	if (index >= 0 && index < size) {
		Student* temp = new Student[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				*(temp + j) = *(list + i);
				j++;
			}
		}
		size--;
		delete[] list;
		list = temp;
	}
}

void Group::remove(Student student) {
	int index = getFirstIndex(student);
	
	if (index != -1) {
		Student* temp = new Student[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j++] = list[i];
			}
		}
		size--;
		delete[] list;
		list = temp;
	}
}

int Group::getFirstIndex(Student st) {
	for (int i = 0; i < size; i++)
	{
		if (st.getName() == list[i].getName() &&
			st.getAge() == list[i].getAge() &&
			st.getMark() == list[i].getMark()) {
			return i;
		}
	}

	return -1;
}

int Group::getLastIndex(Student st) {
	for (int i = size - 1; i >= 0; i--)
	{
		if (st.getName() == list[i].getName() &&
			st.getAge() == list[i].getAge() &&
			st.getMark() == list[i].getMark()) {
			return i;
		}
	}

	return -1;
}

bool Group::contain(Student st) {
	for (int i = 0; i < size; i++)
	{
		if (st.getName() == list[i].getName() &&
			st.getAge() == list[i].getAge() && 
			st.getMark() == list[i].getMark()) {
			return true;
		}
	}
	
	return false;
}

int Group::getSize() { return size; }


Student Group::get(int index) { 
	if (index >= 0 && index <= size) {
		return list[index];
	}

	return Student();
}

string Group::convertToString() {
	string s = "Group of students\n";

	for (int i = 0; i < size; i++)
	{
		s += list[i].convert() + "\n";
	}

	return s; 
}