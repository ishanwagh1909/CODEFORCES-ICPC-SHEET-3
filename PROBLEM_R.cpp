#include<bits/stdc++.h>
using namespace std;
#define int long long

void permutation_with_arrays(int n,vector<int>&v1,vector<int>&v2)
{
    bool flag=true;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++)
    {
        if(v1[i]!=v2[i])
        {
            flag=false;
        }
    }
    if(flag)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }

}

signed main()
{
    int n;
    cin>>n;
    vector<int>vector1(n),vector2(n);
    for(auto &i:vector1)
    {
        cin>>i;
    }
    for(auto &i:vector2)
    {
        cin>>i;
    }
    permutation_with_arrays(n,vector1,vector2);
}