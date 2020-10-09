#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
    int n,k,c=0,max,flag=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int fin[n+1];
    int p[n+1];
    p[0]=0;
    for(int i=1;i<n;i++)
        p[i]=0;
    
    for(int i=0;i<n;i++)
    {   max=0;
        for(int s=1;s<n;s++)
        p[s]=0;
        for(int j=0;j<n;j++)
        {
            if (arr[i][j]==n-1)
            { if (flag==1)
                {
                    k=n;
                    break;
                }
                flag=1;
                k=arr[i][j];
                break;
            }
            p[arr[i][j]]++;
            if (max<p[arr[i][j]] and arr[i][j]!=0)
                {max=p[arr[i][j]];
                k=arr[i][j];}
 
        }
 
        fin[i]=k;
    }
 
 
 
    for(int i=0;i<n;i++)
    {
        cout<<fin[i]<<" ";
    }
    return 0;
}
