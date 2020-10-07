#include <iostream>
using namespace std;

int main(void){
  float var;
  var = .1;
  var = var + 1.;
  var = var + 1e1;
  var = var + 1e-2;

  cout << var;
  return 0;
}