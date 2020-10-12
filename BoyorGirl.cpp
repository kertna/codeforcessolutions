#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
   string s;
   cin>>s;
   map<char,int> m;
   for(int i=0;i<s.length();i++)
   {
        if(m.find(s[i])==m.end())
        {
            m[s[i]]=1;
        }
 
   }
 
 
if(m.size()%2==0)
    cout<<"CHAT WITH HER!";
else
    cout<<"IGNORE HIM!";
 
 
