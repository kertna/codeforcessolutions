#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  long long int n,k;
  cin>>t;
  while(t--)
  {
    cin>>n;
    cin>>k;

    priority_queue<long long int> p;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      p.push(arr[i]);
    }
    if(n==1)
    {
      cout<<p.top()<<"\n";
      return 0;
    }
    for(int i=0;i<k;i++)
    {
      long long int n1=p.top();
      p.pop();
      long long int n2=p.top();
      p.pop();
      p.push(n1+n2);
    }
    cout<<p.top()<<"\n";
    
  }
  return 0;
}
