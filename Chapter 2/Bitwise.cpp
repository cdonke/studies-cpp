#include <iostream>

using namespace std;

void decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
std::string decToBinaryString(int n) 
{ 
    std::string r;
    while(n!=0) {
      r=(n%2==0 ?"0":"1")+r; 
      n/=2;
    }
    return r;
} 
void printBins(int left, int right){
  cout << "Left: ";
  decToBinary(left);
  
  cout << "\tRight: ";
  decToBinary(right);

  cout << endl;
}

int main(void){
  int left = 2, right = 3;
  printf("a == %d, b = %d\n", left, right);
  cout << "a == " << decToBinaryString(left);
  cout << ", b == " << decToBinaryString(right) << endl;
  
  cout << "a&b = " << decToBinaryString(left & right) << endl;
  cout << "a|b = " << decToBinaryString(left | right) << endl;
  cout << "a^b = " << decToBinaryString(left ^ right) << endl;
  cout << "b << 1 " << decToBinaryString(right << 1) << endl;
  cout << "b >> 1 = " << decToBinaryString(right >> 1) << endl;


  return 0;
}
