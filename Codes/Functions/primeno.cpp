#include<iostream>
using namespace std;

bool isPrime(int num){
  for(int i=2; i<num; i++){
    if(num%i==0){
      return false;
    }
  }
  return true;
}

int main(){
  int a,b;
  cout<<"Enter values for a and b:"<<endl;
  cin>>a>>b;

  int i;
  for(i=a; i<=b; i++){
    if(isPrime(i)){
      cout<<i<<endl;
    }
  }
  return 0;
}