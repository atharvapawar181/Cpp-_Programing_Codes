// Simple caluclator.

#include<iostream>
using namespace std;

int main(){
  int a,b;
  cout<<"Enter Value for a and b:"<<endl;
  cin>>a>>b;

  char op;
  cout<<"Input operator:"<<endl;
  cin>>op;

  switch (op)
  {
  case '+':
    cout<<a+b;
    break;
  case '-':
    cout<<a-b;
    break;
  case '*':
    cout<<a*b;
    break;
  case '/':
    cout<<a/b;
    break;
  case '%':
    cout<<a%b;
    break;
  
  default:
    cout<<"Operator not found";
    break;
  }
}