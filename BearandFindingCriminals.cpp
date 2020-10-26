#include <bits/stdc++.h> 
using namespace std;
 
int main() {
    int n,k,c=0;
    cin>>n>>k;
    int arr[n+1];
    for (int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    if(arr[k]==1)
    {
        c++;
    }
    for(int i=1;i<=max(n-k,k-1);i++)
    {
        if(k-i>0 && k+i <=n)
        {
            if(arr[k-i] ==1 && arr[k+i]==1)
            {   
                c=c+2;
            }
        }
        else if(k-i<=0 && k+i<=n)
        {
            if(arr[k+i]==1)
                c++;
        }
        else if(k-i>0 && k+i>n)
        {
            if(arr[k-i]==1)
                c++;
        }
    }
    cout<<c;
    return 0;
}
