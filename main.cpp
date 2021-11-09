#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int A[5];
  A[0] = 11;
  A[1] = 15;
  A[2] = 20;
  cout << sizeof(A) <<endl;
  printf("%d" , A[1]);
  for(int x:A){
    cout << x;
  }





} 