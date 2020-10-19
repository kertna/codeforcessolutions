#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
    
        
      
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
        cin>>arr[i];
        if(arr[n-1]==15)
            cout<<"DOWN";
        else if(arr[n-1]==0)
            cout<<"UP";
        else if(n-2 >=0 && arr[n-1]>arr[n-2] && arr[n-1]<15)
        {
            cout<<"UP";
        }
        
 
        else if(n-2>=0 && arr[n-1]<arr[n-2] && arr[n-1]>0)
            cout<<"DOWN";
        else 
            cout<<"-1";
 
    
    
                
    return 0;
}
