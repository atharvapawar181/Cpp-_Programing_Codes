#include<iostream>
using namespace std;

int main(){
  int a=5;
  int *ptr = &a;

  cout<<"Value of a is "<<*ptr<<endl;

  //new keyword

  int *p = new int(50);
  cout<<"Value of p is "<<*p<<endl;

  //Arrays using pointer
  //Here we had allocated a block of memory using int[]
  


  //delete operator 
  int *arr2 = new int[3];
  arr2[0] = 10;
  arr2[1] = 20;
  arr2[2] = 30;
  delete[] arr2;   //Important
  cout<<"Value of 0 is "<<arr2[0]<<endl;
  cout<<"Value of 1 is "<<arr2[1]<<endl;
  cout<<"Value of 2 is "<<arr2[2]<<endl;

  return 0;
}
