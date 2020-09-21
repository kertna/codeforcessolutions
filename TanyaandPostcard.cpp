#include<bits/stdc++.h>
using namespace std;
# define ll long long 
int  main()
{
    string s,t;
    map<char,ll>mp;
    cin>>s>>t;
    ll c=0,d=0;
    for(ll i=0;i<t.size();i++)
    {
        mp[t[i]]++;
    }
    for(ll i=0;i<s.size();i++)
    {
        if(mp[s[i]]!=0)
        {
            c++;
            mp[s[i]]--;
            s[i]=' ';
        }
    }
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]==' ')
            continue;
        if( mp[toupper(s[i])]!=0)
            {
                d++;
                mp[toupper(s[i])]--;
            }
        else if( mp[tolower(s[i])]!=0)
            {
                d++;
                mp[tolower(s[i])]--;
            }
    }
    cout<<c<<" "<<d;
 
}
