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
  int dom=-1;

  for(int i=0;i<n;i++)
  {
    if(i==0 && i+1<n)
    {
      if(arr[i]>arr[i+1])
        dom=i;
    }
    else if(i==n-1)
    {
      if(arr[i]>arr[i-1])
      {
        if(dom!=-1)
          {if(arr[i]>arr[dom])
            dom=i;}
          else
            dom=i;
        
      }
    }
    else
    {
      if(arr[i]>arr[i-1] || arr[i]>arr[i+1] )
        {
          if(dom!=-1)
          {if(arr[i]>arr[dom])
            dom=i;}
          else
            dom=i;
        }
    }
    
  }
  if(dom==-1)
    cout<<dom<<"\n";
  else
    cout<<dom+1<<"\n";
  
 }
  return 0;

}
