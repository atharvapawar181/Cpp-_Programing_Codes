//Robot- Having 5 Buttons- pressing each diff button, robot speeks different language, Wrote prog for it.

#include<iostream>
using namespace std;

int main(){
  char button;
  cout<<"Input the char.:"<<endl;
  cin>>button;

  switch (button)
  {
  case 'a':
    cout<<"Hello"<<endl;
    break;
  case 'b':
    cout<<"Vadakkam"<<endl;
    break;
  case 'c':
    cout<<"Hola"<<endl;
    break;
  case 'd':
    cout<<"こんにちは"<<endl;
    break;
  case 'e':
    cout<<"Minto"<<endl;
    break;
  
  default:
    cout<<"I'm Learning now!"<<endl;
    break;
  }

}