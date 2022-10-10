#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Value of n:"<<endl;
  cin>>n;

  int sum=0, org_num=n; //org_num is temperory varoable
  while(n>0){
    int rem=n%10;
    sum = sum + rem*rem*rem;
    n = n/10;
  }
  if(org_num==sum){
    cout<<"Armstrong Number"<<endl;
  }
  else{
    cout<<"Not Armstrong Number"<<endl;
  }
  return 0;
  
}