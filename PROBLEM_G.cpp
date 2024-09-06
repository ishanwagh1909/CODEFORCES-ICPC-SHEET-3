#include <bits/stdc++.h>
using namespace std;

void palindrome_array(int n,vector<int>&v)
{
    vector<int>v_copy=v;
    reverse(v_copy.begin(),v_copy.end());
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=v_copy[i])
        {
            flag=false;
            break;
        }
    }
    if(flag)
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
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    palindrome_array(n,v);
}