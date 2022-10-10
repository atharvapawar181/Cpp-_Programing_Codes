//Check number is Prime no. or not

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter any number:";
  cin>>n;
  
  int i;
  for(i=2; i<n; i++){
    if(n%i==0){
      cout<<"Non Prime Number"<<endl;
      break;
    }
  }if(i==n){
      cout<<"Prime Nmuber"<<endl;
    }
  return 0;

}