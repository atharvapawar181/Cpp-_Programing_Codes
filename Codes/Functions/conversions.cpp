#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
  int ans = 0;
  int x = 1;
  while (n>0)
  {
    int y = n%10;
    ans = ans + x*y;
    x = x*2;
    n = n/10;
  }
  return ans;
}

int octalToDecimal(int p){
  int ans = 0;
  int x = 1;
  while (p>0)
  {
    int y = p%10;
    ans = ans + x*y;
    x = x*8;
    p = p/10;
  }
  return ans;
}

int HexaToDecimal(string q){
  int ans = 0;
  int x = 1;

  int s = q.size();
  for (int  i=s; i >=0; i--)
  {
    if(q[i] >= '0' && q[i] <= '9'){
      ans += x*(q[i]-'0');
    }
    else if(q[i] >= 'A' && q[i]<= 'F'){
      ans += x*(q[i]-'A' + 10);
    }
    x *= 16;
  }
  
  return ans;
}

int decimalToBinary(int r){
  int x = 1;
  int ans = 0;
  while (x <= r)
      x *= 2;
  x /= 2;

  while (x>0)
  {
    int lastDigit = r/x;
    r -= lastDigit*x;
    x /= 2;
    ans = ans*10 + lastDigit;

  }
  return ans;
}


int decimalToOctal(int u){
  int x = 1;
  int ans = 0;
  while (x <= u)
      x *= 8;
  x /= 8;

  while (x>0)
  {
    int lastDigit = u/x;
    u -= lastDigit*x;
    x /= 8;
    ans = ans*10 + lastDigit;

  }
  return 0;
}

// string decimalToHexa(int z){
//   int x = 1;
//   string ans = "";
//   while (x <= z)
//       x *= 16;
//   x /= 16;

//   while (x>0)
//   {
//     int lastDigit = z/x;
//     z -= lastDigit*x;
//     x /= 16;

//     if(lastDigit <= 9)
//         ans = ans + to_string(lastDigit);
//     else{
//       char c = 'A' + lastDigit - 10;
//       ans.push_back(c);
//     }
//   }
//   return ans;
// }

int main(){
  int n,p,r,u;
  string q;
  string z;
  cin>>n>>p>>q>>r>>u>>z;


  cout<<"Binary to Decimal: "<<binaryToDecimal(n)<<endl;
  cout<<"Octal to Decimal: "<<octalToDecimal(p)<<endl;
  cout<<"Hexa to Decimal: "<<HexaToDecimal(q)<<endl;
  
  cout<<"Decimal to Binary: "<<decimalToBinary(r)<<endl;
  cout<<"Decimal to Octal: "<<decimalToOctal(u)<<endl;
  //cout<<"Decimal to Hexa: "<<decimalToHexa(z)<<endl;
}