#include <bits/stdc++.h>
using namespace std;

void searching(int n,vector<int>&v,int k)
{
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i]==k)
        {
            ans=i;
            break;
        }
    }
    cout<<ans;
}

signed main()
{
    int n,k;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    cin>>k;
    searching(n,v,k);
}