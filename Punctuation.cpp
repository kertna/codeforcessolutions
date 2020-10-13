#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
    string s,temp="";
    int flag=0;
    getline(cin,s); 
    istringstream is(s);
    string tmp;
    while(is >> tmp) 
    {
        temp.append(tmp);
        temp.append(" ");
    }
    temp.erase(temp.length()-1,1);
    for(int i=1;i<temp.length()-1;i++)
    {
        if ((temp[i]==',' or temp[i]=='.' or temp[i]=='!' or temp[i]=='?') && temp[i-1]==' ')
        {
            temp.erase(i-1,1);
            i=i-1;
        }
        if((temp[i]==',' or temp[i]=='.' or temp[i]=='!' or temp[i]=='?') && temp[i+1]!=' ')
        {   
            temp.insert(i+1," ");
        }
    }
    cout<<temp;
    
                
    return 0;
}
