#include <iostream>
using namespace std;

void printArray(int (&array)[5]){
  int len = sizeof(array)/sizeof(array[0]);
  for(int i=0; i < len; i++)
    cout << array[i] << ", ";
  
  cout << endl;
}

int main(void){
  int arr[5] = {8,10,6,2,4};
  int len = sizeof(arr)/sizeof(arr[0]);
  printArray(arr);


  int x=0;
  bool changed; 
  do {
    changed = false;
    cout << ++x << ": ";

    for(int i=0; i<len-1; i++){
      if (arr[i] > arr[i+1]) {
        changed = true;
        int m = arr[i];
        arr[i] = arr[i+1];
        arr[i+1]= m;

        cout << "[" << arr[i] << "," << arr[i+1] << "] ";
      }
    }
    
    printArray(arr);
  } while (changed);
}
