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
    int d=n%10;
    int count=0;
    while(n>0)
    {
      count++;
      
      n=n/10;



    }
    if(count==1)
      n=1;
    else if(count==2)
      n=3;
    else if(count==3)
      n=6;
    else
      n=10;
    cout<<((d-1)*10+ n)<<"\n";
  }
  return 0;

}
