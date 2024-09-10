#include<bits/stdc++.h>
using namespace std;

void matrix(int n,vector<vector<int>>&v)
{
    int sum_md=0,sum_sd=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum_md+=v[i][j];
            }
            if(i+j==n-1)
            {
                sum_sd+=v[i][j];
            }
        }
    }
    cout<<abs(sum_md-sum_sd);
}

signed main()
{
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    matrix(n,v);
}