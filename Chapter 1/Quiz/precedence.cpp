#include <iostream>
using namespace std;

int main(void){
  int i,j,k;

  i = 10;
  j = 3;

  k = ( i % j * i /3) / (j % i - j/ i);
  
  cout << k;
  return 0;
}