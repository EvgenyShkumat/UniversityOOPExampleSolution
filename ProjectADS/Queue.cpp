#include "Queue.h"

void Queue::enqueue(int element) {
	if (size == 0) {
		queue = new int[1];
		*queue = element;
	}
	else {
		int* temp = new int[size + 1];

		for (int i = 0; i < size; i++)
		{
			*(temp + i) = *(queue + i);
		}
		*(temp + size) = element;
		delete[] queue;
		queue = temp;
	}

	size++;
}
int Queue::dequeue() {
	if (size != 0) {
		int* temp = new int[size - 1];

		for (int i = 1; i < size; i++)
		{
			*(temp + i - 1) = *(queue + i);
		}
		int element = *queue;
		delete[] queue;
		queue = temp;
		size--;

		return element;
	}

	return 0;
}
int Queue::peek() {
	if (size > 0) {
		return queue[0];
	}
}
int Queue::getSize() { return size; }
bool Queue::isEmpty() { return size == 0; }

string Queue::getInfo() {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(*(queue + i)) + " ";
	}

	return s;
}