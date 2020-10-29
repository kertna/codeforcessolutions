#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
long long int fact(long long int n)
{
  if(n==0)
    return 1;
  return n*fact(n-1);
}
int main()
{
  
  long long int n;
  cin>>n;

  long long int ans= fact(n)/(fact(n-n/2)*fact(n/2));
  ans=ans*(fact(n/2-1)*fact(n/2-1))/2;
  cout<<ans;
  return 0;

}
