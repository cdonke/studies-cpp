#include <iostream>
using namespace std;

void ex3(){
  int i = 10;
  float a = -1.0;
  while (a < 0){
    a = a + 10.0 * a / -10;
    --i;
  }
  
  cout << i << endl;
}

void ex4() {
  float a;
  int i = 0;
  for (a = .009; a < 1e2; a *= 1e1) 
    i++;
  cout << i << endl;
}

void ex5(){
  int i=1, j=2;

  if (i > j && j > i) //false
    i++;
  if (i > j || j > i) //true
    j++; // 3
  if (i | j) // 01 | 11 = 11
    i++; //2
  if (i & j) // 11 | 11 = 11
    j++; // 4

  cout << i * j << endl; //8
}

void ex6(){
  int i = 1, j = 2, k;
  i = i << j; // 1 << 2 => 00001 << 2 => 00100
  cout << dec << i  << endl;
  cout << hex << i  << endl;

  j = j << i; // 10 << 00100 
  cout << dec << j  << endl;
  cout << hex << j  << endl;

  k = j >> i; // 
  cout << dec << k  << endl;
  cout << hex << k  << endl;
}

void ex7() {
  int t[5];
  for (int i = 0; i < 5; i++)
    t[i] = 2 * i * i;
  cout << t[4] / t[1] << endl;
}

void ex8(){
  float arr[3][3] = {{.1,1.,10.},{10.,.1,1.},{.1,10.,1.}};
  float x = 1.;
  for (int i = 0; i < 3; i++)
    x *= arr[i][i];

    cout << x << endl;
}

void ex9(){

}

int main(void){
  ex8();
  return 0;
}