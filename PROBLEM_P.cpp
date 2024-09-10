#include<bits/stdc++.h>
using namespace std;

void minimize_number(int n,vector<int>&v)
{
    int ans=0;
    for(int i=0;i<64;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(v[j]%2==0)
            {
                v[j]=v[j]/2;
                cnt+=1;
            }
        }
        if(cnt==n)
        {
            ans+=1;
        }
        else
        {
            break;
        }
    }
    cout<<ans;
}

signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i:v)
    {
        cin>>i;
    }
    minimize_number(n,v);
}