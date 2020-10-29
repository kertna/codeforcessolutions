#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  int n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int ok=1;
    if(n<=2)
    {
      cout<<"-1\n";
      continue;
    }
    for(int i=0;i<=n && ok;i=i+3)
    {
      for(int j=0;j<=n;j=j+5)
      {
        int k=n-i-j;
        
        if(k%7==0)
        {
          cout<<i/3<<" "<<j/5<<" "<<k/7<<"\n";
          ok=0;
          break;
        }
      }

    }
    if(ok)
      cout<<"-1\n";
  }
  return 0;
}
