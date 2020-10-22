#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
    int a,f,d;
    cin>>a>>f>>d;
    if (d==0)
    {
        if (a==f)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
    {
    if ((f-a)/d <0)
    {
        cout<<"NO";
    }
    else if (floor(double(f-a)/d) == double(f-a)/d)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    
    }
    
 
 
    
    
                
    return 0;
}
