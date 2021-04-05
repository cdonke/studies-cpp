// ProjectTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "RPLStack.h"

using namespace std;


const bool isNumber(const string& str) {
	for (char const& c : str) {
		if (isdigit(c) == 0)
			return false;
	}

	return true;
}
const bool isOperation(const string& str) {
	if (str.length() > 1) {
		return false;
	}
	else {
		if (str == "+" || str == "-" || str == "*" || str == "/" || str == "%") {
			return true;
		}
	}

	return false;
}

void printStack(RPLStack& stack) {
	cout << "\t[";
	for (int i = 0; i <= stack.Position(); i++) {
		cout << stack.Peek(i) << ", ";
	}
	cout << "]" << endl;;
}


int main()
{
	cout << "Welcome to the C++ RPL Calculator.\n";
	cout << "Type in the stack and the operators\n";

	RPLStack stack(1);

	string in;
	do {
		cin >> in;

		if (isNumber(in)) {
			stack.Push(in);
		}
		else {
			int member2 = stack.Pop();
			int member1 = stack.Pop();

			if (in == "+") {
				stack.Push(member1 + member2);
			}
			else if (in == "-") {
				stack.Push(member1 - member2);
			}
			else if (in == "*") {
				stack.Push(member1 * member2);
			}
			else if (in == "/") {
				stack.Push(member1 / member2);
			}
			else if (in == "%") {
				stack.Push(member1 % member2);
			}
			else {
				stack.Push(member2);
				stack.Push(member1);
			}
		}

		printStack(stack);
	} while (in != "q");

	return 0;
}