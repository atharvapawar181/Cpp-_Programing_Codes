#include<iostream>
using namespace std;

int binarySearch(int array[], int n, int key){
  int s=0;  //start point, index 
  int e=n;  //end point, index
  while (s<=e)
  {
    int mid=(s+e)/2;
    if (array[mid]==key) 
    {
      return mid;  
    }
    else if (array[mid]>key)
    {
      e = mid - 1;   //mid greater than element 
    }
    else{
      s = mid + 1; //mid less than element
    }
  }
  return -1;
  
}

int main(){
  int n;
  cin>>n;

  int array[n];
  for (int  i = 0; i < n; i++)
  {
    cin>>array[i];
  }

  int key;
  cin>>key;

  cout<<binarySearch(array,n,key)<<endl;
  return 0;
  
}