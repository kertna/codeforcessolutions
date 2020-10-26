#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
    
        
      
      int x1,y1,x2,y2,n;
      cin>>x1>>y1>>x2>>y2;
 
      
      if (y1==y2)
      {
        n=((x2-x1));
 
        cout<<x1<<" "<<y1+n<<" "<<x2<<" "<<y2+n;
      }
 
      else if(x1==x2)
      {
        n=(y2-y1);
        cout<<x1+n<<" "<<y1<<" "<<x2+n<<" "<<y2;
      }
      else if (abs(x2-x1)==abs(y2-y1))
      {
        
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
      }
      else
        cout<<"-1";
 
    
    
                
    return 0;
}
