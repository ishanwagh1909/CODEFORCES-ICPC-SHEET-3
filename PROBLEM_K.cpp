#include <bits/stdc++.h>
using namespace std;

#define int long long
void sum_digits(string s)
{
    vector<int>v(1);
    for(auto i:s)
    {
        v.push_back(i-48);
    }
    int sum=0;
    for(auto i:v)
    {
        sum+=i;
    }
    cout<<sum;
}

signed main() {

    int n;
    cin>>n;
    string s;
    cin>>s;
    sum_digits(s);
}