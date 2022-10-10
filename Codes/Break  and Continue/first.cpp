//Print numbers from 1 to 100, expcept numbers divisible by 3.

#include<iostream>
using namespace std;

int main(){
  for(int n=1; n<=100; n++){
    if(n%3==0){
      continue;
    }
    cout<<"Numbers are:"<<n<<endl;
  }
  return 0;

}