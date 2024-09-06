#include <bits/stdc++.h>
using namespace std;

void positions_in_array(int n,vector<int>&v)
{
    for(int i=0;i<n;i++)
    {
        if(v[i]<=10)
        {
            cout<<"A["<<i<<"] = "<<v[i]<<endl;
        }
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
    positions_in_array(n,v);
}