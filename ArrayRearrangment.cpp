#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  long long int n,x,i;
  cin>>t;
  while(t--)
  {
    cin>>n;
    cin>>x;
    int a[n];
    int b[n];
   for(i=0;i<n;i++)
    cin>>a[i];
   for(int i=0;i<n;i++)
    cin>>b[i];
   reverse(b,b+n);
   for(i=0;i<n;i++)
   {
    if(a[i]+b[i]<=x)
      continue;
    else
      break;
   }
   if(i==n)
    cout<<"Yes"<<"\n";
  else
    cout<<"No"<<"\n";

    
  }
  return 0;
}
