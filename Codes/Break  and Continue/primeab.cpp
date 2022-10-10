//Print all prime no.s betn a and b.

#include<iostream>
using namespace std;

int main(){
  int a,b;
  cout<<"Enter values for a and b:"<<endl;
  cin>>a>>b;

  for (int num = a; num <= b; num++)
  {
    int i;
    for ( i=2; i<num ; i++)
    {
      if(num%i==0){
        break;
      }
    }
    if (i==num)
    {
      cout<<num<<endl;
    }
  }
  
}