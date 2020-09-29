#include <bits/stdc++.h>
using namespace std;
bool ok(long long int arr[],long long int mid,long long int n,long long int k)
{long long int sum=0;long long int count=1;
    for(long long int i=0;i<n;i++)
    {
        if(arr[i]>mid)
            return 0;
        sum=sum+arr[i];
        if(sum>mid)
        {
            count++;
            sum=arr[i];
        }
    }
    if(count<=k)
        return true;
    return false;
 
}
long long int binary(long long int arr[],long long int l,long long int r,long long int n,long long int k)
{long long int mid;long long int num=0;
    while(l<=r){
    mid=(l+r)/2;
    if(ok(arr,mid,n,k))
        {r=mid-1;num=mid;}
    else
        l=mid+1;}
    return num;
}
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    cout.tie(NULL);
    long long int n,k,sum=0;
    
        
        cin>>n;
        cin>>k;
 
        long long int arr[n];
        for(long long int i=0;i<n;i++)
            {cin>>arr[i];sum=sum+arr[i];}
 
        long long int num=binary(arr,1,sum,n,k);
 
        cout<<num<<"\n";
        
    
    
    return 0;
}
