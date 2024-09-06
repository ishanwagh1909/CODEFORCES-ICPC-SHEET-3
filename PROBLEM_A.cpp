#include <bits/stdc++.h>
using namespace std;

#define int long long

void summation(vector<int>&v)
{
    int sum=0;
    for(auto i:v)
    {
        sum+=i;
    }
    cout<<abs(sum);
}

signed main() {

    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    summation(v);
}