#include <iostream>
using namespace std;

void equality(){
  int *ptr1, *ptr2, array[3], i;
  
  cout << "Equality" << endl;;

  // ptr1 points to the first element of the array
  ptr1 = array;

  // ptr2 points to the first element of the array
  ptr2 = ptr1;

  if (ptr2 == ptr1) {
    cout << "\tEquals";
  }
  else 
  {
    cout << "\tNot equals";
  }

  cout << endl;
}

void sumsubtract(){
  int *ptr1, *ptr2, array[3], i;
  
  cout << "Sum and Subtraction" << endl;;

  // ptr1 points to the first element of the array
  ptr1 = array;

  // ptr2 points to the first element of the array
  cout << "\tInt size:" << sizeof(int) << endl;
  ptr2 = ptr1;
  ptr2 += 2;

  cout << "\t&ptr1: "<< &ptr1 << "\t&ptr2: " << &ptr2 << endl;
  cout << "\t&ptr2 - &ptr1: " << &ptr2 - &ptr1;

  cout << endl;
}

int main(void){
  equality();
  sumsubtract();
}