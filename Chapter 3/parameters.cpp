#include <iostream>

using namespace std;
void ByRef(int &param);
void ByVal(int param);

int main(void) 
{
	int var = 1;
	
	cout << "var = " << var << endl;
	ByVal(var);
	cout << "var = " << var << endl;

  cout << "==========================" << endl;

  var = 1;
	
	cout << "var = " << var << endl;
	ByRef(var);
	cout << "var = " << var << endl;

	return 0;
} 


void ByVal(int param)
{  
	cout << "----------" << endl;
	cout << "I have got: " << param << endl;
	param++;
	cout << "I'm about to give back: " << param << endl;
	cout << "----------" << endl;
}

void ByRef(int &param)
{
	cout << "----------" << endl;
	cout << "I have got: " << param << endl;
	param++;
	cout << "I'm about to give back: " << param << endl;
	cout << "----------" << endl;
}