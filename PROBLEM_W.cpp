#include <bits/stdc++.h>
using namespace std;

void mirror_array(int n,int m,vector<vector<int>>&v)
{
    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

signed main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    mirror_array(n,m,v);
}