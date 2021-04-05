#include "RPLStack.h"

void RPLStack::_init() {
	_stack = new int[_length];
}

void RPLStack::_resize() {
	_length *= 2;

	int* new_stack = new int[_length];
	memcpy(new_stack, _stack, _currentPosition * sizeof(int) );

	delete [] _stack;
	_stack = new_stack;
}

RPLStack::~RPLStack() {
	delete _stack;
}

const int& RPLStack::Length() {
	return _length;
}
const int& RPLStack::Position() {
	return _currentPosition;
}

void RPLStack::Push(int number) {
	if (number == 0)
		return;

	if (++_currentPosition == _length) {
		_resize();
	}

	_stack[_currentPosition] = number;
}
void RPLStack::Push(std::string number) {
	int new_number = std::stoi(number);
	Push(new_number);
}

const int& RPLStack::Pop() {
	if (--_currentPosition < 0) {
		std::cout << "Empty stack" << std::endl;
		_currentPosition = -1;
		return 0;
	}


	return _stack[_currentPosition];
}

const int& RPLStack::Peek() {
	return _stack[_currentPosition -1];
}

const int& RPLStack::Peek(int position) {
	return _stack[position];
}