#include<iostream>
using namespace std;

int sum(int n){
  int ans =0;
  for(int i=1; i<=n; i++){
    ans = ans + i;
  }
  return ans;
}

int main(){
  int n;
  cout<<"Value of n:"<<endl;
  cin>>n;

  cout<<sum(n)<<endl;

}