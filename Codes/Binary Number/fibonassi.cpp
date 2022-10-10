#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Value of n:"<<endl;
  cin>>n;

  if(n==1){
    cout<<"0\n";
  }
  else if(n==2){
    cout<<"0 1\n";
  }
  else{
    int nextTerm, a=0, b=1, i=3;
    cout<<a<<" "<<b<<" ";
    while (i<=n)
    {
      nextTerm = a + b;
      cout<<" "<<nextTerm<<" ";
      a = b;   //As after addition of first two terms, this is done for next term
      b = nextTerm;
      i++;
    }
    cout<<" \n ";
  }
  return 0;
}