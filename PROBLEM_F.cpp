#include <bits/stdc++.h>
using namespace std;

void reversing(int n,vector<int>&v)
{
    for(int i=n-1;i>=0;i--)
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
        cin >>i;
    }
    reversing(n,v);
}