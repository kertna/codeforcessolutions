#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
   
    
    
    int n,m;
   cin>>n>>m;
   for(int i=2*n+1;i<=4*n;i=i+2)
   {
    if(i<=m)
        cout<<i<<" ";
    if(i-2*n<=m)
        cout<<i-2*n<<" ";
    if(i+1<=m)
        cout<<i+1<<" ";
    if(i+1-2*n<=m)
        cout<<i+1-2*n<<" ";
 
 
   }
 
 
 
 
 
                
    return 0;
}
