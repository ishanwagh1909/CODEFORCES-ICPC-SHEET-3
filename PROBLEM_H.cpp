#include <bits/stdc++.h>
using namespace std;

void sorting(int n,vector<int>&v)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]>v[j])
            {
                swap(v[i],v[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
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
    sorting(n,v);
}