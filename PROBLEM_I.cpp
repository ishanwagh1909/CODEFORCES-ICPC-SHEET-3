#include <bits/stdc++.h>
using namespace std;

void smallest_pair(int n,vector<int>&v)
{
    int minimum=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int operation=v[i]+v[j]+j-i;
            minimum=min(minimum,operation);
        }
    }
    cout<<minimum<<endl;
}

signed main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i: v) {
            cin >> i;
        }
        smallest_pair(n, v);
    }
}