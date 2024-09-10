#include<bits/stdc++.h>
using namespace std;

void search_in_matrix(int n,int m,vector<vector<int>>&v,int x)
{
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]==x)
            {
                flag=true;
            }
        }
    }
    if(flag)
    {
        cout<<"will not take number";
    }
    else
    {
        cout<<"will take number";
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
    int x;
    cin>>x;
    search_in_matrix(n,m,v,x);
}