#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  long long int a,b,c,d;
  cin>>t;
  while(t--)
  {
    cin>>a>>b>>c>>d;
    cout<<max(a+b,c+d)<<"\n";
    
  }
  return 0;
}
