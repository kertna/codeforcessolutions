#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
 int t,n;
 cin>>t;
 while(t--)
 {
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int f,l;
  f=-1;
  l=-1;
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==1)
    {
      if(f==-1)
      {
        count++;
        f=i;
        l=i;
      }
      else
      {
        count++;
        l=i;
      }
    }
  }
  cout<<l-f-count+1<<"\n";
 }
  return 0;

}
