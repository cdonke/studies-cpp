#include <iostream>
using namespace std;

void ex2() {
  int t[4] = { 8,4,2,1};
  int *p1 = t+2, *p2 = p1 -1;
  p1++;
  cout << *p1 - t[p1-p2] << endl;
}

int fun(int p) {
  ++p;
  return p++;
}
void ex3() {
  int a = 1,b;
  b = fun(a);
  cout << a+b << endl;
}
int fun_ex4(int p){
  int cnt = 0;
  for (p =2 * p; p > 0; p >>= 2)
    cnt++;
  return cnt;
}
void foon(int p){
  for (int cnt = fun_ex4(p); cnt > 0; cnt--){
    cout << "*";
  }
}
void ex4(){
  foon(2);
  cout << endl;
}


int fun1_ex5(int p) {
  ++p;
  return p++;
}
int fun2_ex5(int &p){
  ++p;
  return p++;
}
void ex5(){
  int a=1,b,c;
   b = fun1_ex5(a);
   c = fun2_ex5(b);

   cout << a+b+c <<endl;
}
int main(void){
  ex5();

  return 0;
}
