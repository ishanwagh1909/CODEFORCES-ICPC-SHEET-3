#include <bits/stdc++.h>
using namespace std;

#define int long long
void replace_minmax(int n,vector<int>&v)
{
    int min_ele=*min_element(v.begin(),v.end());
    int max_ele=*max_element(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        if(v[i]==min_ele)
        {
            v[i]= max_ele;
        }
        else if(v[i]==max_ele)
        {
            v[i]=min_ele;
        }
    }
    for(auto i:v)
    {
        cout<<i<<" ";
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
    replace_minmax(n,v);
}