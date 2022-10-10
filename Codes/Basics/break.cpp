#include<iostream>
using namespace std;

int main(){
  int pM=3000;
  for(int date=1; date<=30; date++){
    if(date%2==0){
      continue;
    }
    if(pM==0){
      break;
    }
    cout<<"She can go out Today"<<endl;
    pM=pM-300;
  }
  return 0;
}