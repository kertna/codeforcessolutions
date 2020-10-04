#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
   
    
    
   int t;
   int x1,y1,x2,y2,i;
   cin>>t>>x1>>y1>>x2>>y2;
   string s;
   cin>>s;
 
   for( i=0;i<s.length();i++)
   {
    if(s[i]=='E')
    {
        if(x2>x1)
        {
            x1=x1+1;
        }
    }
    if(s[i]=='W')
    {
        if(x2<x1)
        {
            x1=x1-1;
        }
    }
    if(s[i]=='S')
    {
        if(y2<y1)
        {
            y1=y1-1;
        }
    }
    if(s[i]=='N')
    {
        if(y2>y1)
        {
            y1=y1+1;
        }
    }
    
    
 
    
 
 
 
    if(x1==x2 && y1==y2)
    {
       
        break;
    }
    
 
   }
   if(i==s.length())
   {
    cout<<"-1";
   }
   else
    cout<<i+1;
 
 
                
    return 0;
}
