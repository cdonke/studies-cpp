#include <iostream>
using namespace std;

int main(void){
  int ivar, *ptr;
  ivar = 4;
  ptr = &ivar;

  cout << *ptr;

  *ptr = 3;
  cout << ivar;
  cout << *ptr;

  return 0;
}