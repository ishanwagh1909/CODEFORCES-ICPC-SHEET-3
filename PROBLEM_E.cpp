#include <bits/stdc++.h>
using namespace std;

void lowest_number(int n,vector<int>&v)
{
    int lowest_no=INT_MAX,index=1;
    for(int i=1;i<=n;i++)
    {
        if(v[i]<lowest_no)
        {
            lowest_no=v[i];
            index=i;
        }
    }
    cout<<lowest_no<<" "<<index;
}

signed main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    lowest_number(n,v);
}