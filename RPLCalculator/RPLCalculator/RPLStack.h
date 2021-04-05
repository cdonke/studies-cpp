#pragma once

#include <cstdint>
#include <iostream>
#include <string>


class RPLStack {
	int _length;
	int _currentPosition = -1;
	void _resize();
	int* _stack = nullptr;

	void _init();
public:
	RPLStack() : _length(10) { _init(); };
	RPLStack(int capacity) : _length(capacity) { _init(); };
	~RPLStack();
	const int& Length();
	const int& Position();
	void Push(int number);
	void Push(std::string number);
	const int& Pop();
	const int& Peek();
	const int& Peek(int position);
};