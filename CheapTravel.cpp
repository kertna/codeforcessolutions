#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
    
        
      int n,m,a,b;
      cin>>n>>m>>a>>b;
      if(m*a>b)
      {if(b<(n%m)*a)
        cout<<ceil(double(n)/m)*b;
      else
      cout<<(n/m)*b+(n%m)*a;
}
else
cout<<n*a;
 
    
    
                
    return 0;
}
