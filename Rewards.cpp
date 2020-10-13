#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
    
    int a1,a2,a3;
    int b1,b2,b3;
    int n;
 
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;
    a1=a1+a2+a3;
    b1=b1+b2+b3;
 
    if (ceil(double(a1)/5)+ceil(double(b1)/10) <= n)
        cout<<"YES";
 
 
 
    else
    cout<<"NO";
    
                
    return 0;
}
