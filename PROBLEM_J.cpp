#include <bits/stdc++.h>
using namespace std;

void lucky_array(int n,vector<int>&v)
{
    int min_element=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(v[i]<min_element)
        {
            min_element=v[i];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]== min_element)
        {
            cnt+=1;
        }
    }
    string ans=cnt%2==1?"Lucky":"Unlucky";
    cout<<ans;
}

signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i: v) {
        cin >> i;
    }
    lucky_array(n,v);
}