#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
    
        
      
      int sum=0,x;
      for(int i=0;i<5;i++)
      {
        cin>>x;
        sum=sum+x;
      }
      if (sum%5==0 && sum!=0)
        cout<<sum/5;
      else
        cout<<"-1";
    
    
                
    return 0;
}
