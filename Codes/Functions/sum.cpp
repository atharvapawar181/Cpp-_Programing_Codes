#include<iostream>
using namespace std;

int add(int n1, int n2){
  int sum = n1 + n2;
  return sum;
}

int main(){
  int a=5;
  int b=10;
  cout<<add(a,b)<<endl;
  return 0;
}