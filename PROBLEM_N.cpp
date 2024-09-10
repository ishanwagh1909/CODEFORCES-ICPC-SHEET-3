#include<bits/stdc++.h>
using namespace std;

void check_code(int a,int b,vector<char>&v)
{
    int cnt=0;
    for(int i=0;i<a+b+1;i++)
    {
        if(v[i]=='-')
        {
            cnt+=1;
        }
    }
    if(cnt==1 and v[a]=='-')
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}

signed main()
{
    int a,b;
    cin>>a>>b;
    vector<char>v(a+b+1);
    for(auto &i:v)
    {
        cin>>i;
    }
    check_code(a,b,v);
}