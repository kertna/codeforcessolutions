#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
    
    int n,x;
    map<int,int> m;
    cin>>n;
    n=2*n;
    int max=0;
    while(n--)
    {
        cin>>x;
        if(m.find(x)!=m.end())
        {
            m.erase(x);
        }
        else
        {
            m[x]=1;
        }
        if (m.size()>max)
            max=m.size();
    }
    
    cout<<max;
                
    return 0;
}
