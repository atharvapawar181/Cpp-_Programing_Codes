#include<iostream>
using namespace std;

int main(){
  int a=3;
  int *b = &a;
  //& = Address of 👏
  cout<<"Address of a is: "<<&a<<endl;  //Here both give same, address of a
  cout<<"Address of a is: "<<b<<endl;;

  //* = (value of) Dereference operator
  cout<<"Value at address b is: "<<*b<<endl;

  //Pointer to pointer 🤦‍♀️

  int **c = &b;
  cout<<"Address of b is: "<<&b<<endl;
  cout<<"Value at address b is: "<<c<<endl;
  cout<<"Value at address c is: "<<*c<<endl;
  cout<<"Value at address value at(Value at(c)) is: "<<**c<<endl;
  return 0;

}