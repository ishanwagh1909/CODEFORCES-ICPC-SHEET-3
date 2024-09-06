#include <bits/stdc++.h>
using namespace std;

void replacement(int n,vector<int>&v)
{
    for(int i=0;i<n;i++)
    {
        if(v[i]<0)
        {
            v[i]=2;
        }
        else if(v[i]>0)
        {
            v[i]=1;
        }
    }
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}

signed main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    replacement(n,v);
}