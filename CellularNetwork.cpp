#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int binary(int num,int arr[],int m)
{
  int dis=2147483647;
  auto itr=lower_bound(arr,arr+m,num)-arr;
  
  if(itr<m)
    dis=(arr[itr]-num);
  if(itr-1>=0)
    dis=min(dis,(num-arr[itr-1]));
  
  return dis;
 
}
int main()
{
  int n,m,dis=0;
  cin>>n>>m;
  int city[n];
  int cell[m];
  for(int i=0;i<n;i++)
    cin>>city[i];
  for(int i=0;i<m;i++)
    cin>>cell[i];
 
 
  for(int i=0;i<n;i++)
  {
 
 
    int r=binary(city[i],cell,m);
    dis=max(dis,r);
  }
  cout<<dis;
  return 0;
 
}
