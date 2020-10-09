#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int find(map <char,vector<string> > m,int n,char start)
{   
    int sum=0;
    if(n==1)
    {
        return 1;
    }
    for(int i=0;i<m[start].size();i++)
    {
        string s=m[start][i];
       
        char c=s[0];
        sum=sum+find(m,n-1,c);
    }
    return sum;
}
int main() {
   
   
      int n,q;
      map <char,vector<string> > m;
      string l;
      char r;
      cin>>n>>q;
      
      for(int i=0;i<q;i++)
      {
        cin>>l;
        cin>>r;
        m[r].push_back(l);
      }
      
      cout<<find(m,n,'a');
      
        
    return 0;
}
