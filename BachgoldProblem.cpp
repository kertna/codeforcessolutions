#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
    int n,k;
    cin>>n;
    if (n%2==0)
    {
        k=n/2;
        cout<<k<<"\n";
        for(int i=0;i<k;i++)
        {
            cout<<"2"<<" ";
        }
    }
    else
    {
        n=n-3;
        k=n/2;
        cout<<k+1<<"\n";
        for(int i=0;i<k;i++)
        {
            cout<<"2"<<" ";
        }
        cout<<"3";
 
    }
 
 
    
    
                
    return 0;
}
