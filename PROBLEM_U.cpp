#include<bits/stdc++.h>
using namespace std;

void is_b_sebsequence_of_a(int n,int m,vector<int>&v1,vector<int>&v2)
{
    int starting=0,cnt=0;
    for(int i=0;i<m;i++)
    {
        for(int j=starting;j<n;j++)
        {
            if(v2[i]==v1[j])
            {
                cnt+=1;
                starting=j+1;
                break;
            }
        }
    }
    if(cnt==m)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

signed main()
{
    int n,m;
    cin>>n>>m;

    vector<int>v1(n),v2(m);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }
    is_b_sebsequence_of_a(n,m,v1,v2);
}