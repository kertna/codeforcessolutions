#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
    
   int n,c,d;
   c=d=0;
   cin>>n;
   string s;
   cin>>s;
   int l=s.length();
   for(int i=0;i<l;i++)
   {
    if (s[i]=='1')
        c++;
    else
        d++;
   }
   cout<<(l-2*min(c,d));
 
                
    return 0;
}
