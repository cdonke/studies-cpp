#include <iostream>
using namespace std;

int main(void){
  int byte = 255;
  cout << hex << byte;
  cout << "===========\r\n";
  cout << byte << "\r\n" << dec << byte;
  cout << "\r\n";
  cout << "===========\r\n";
  cout << oct << byte;
  return 0;
}