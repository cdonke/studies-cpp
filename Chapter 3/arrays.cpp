#include <iostream>

using namespace std;

int main(void) {
  int *ptr, Arr[3];
  ptr = &Arr[0];
  ptr = Arr;
  
  bool eq = Arr == &Arr[0];
  cout << eq;

  return 0;
} 