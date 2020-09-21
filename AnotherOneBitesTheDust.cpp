#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
  long long int a,b,c;
  cin>>a>>b>>c;
 
  if (a==b)
  {
    cout<<(a+b+2*c);
  }
  else
    {a=b=min(a,b);
    cout<<(a+b+2*c)+1;}
 
 
 
    return 0;
 
}
