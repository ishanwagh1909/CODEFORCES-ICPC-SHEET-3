#include<bits/stdc++.h>
using namespace std ;
#define int long long

void fibonacci(int n)
{
    if(n==1)
    {
        cout<<0;
    }
    else if(n==2)
    {
        cout<<1;
    }
    else
    {
        int a = 0, b = 1;
        int c;
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a=b;
            b=c;
        }
        cout<<c;
    }
}
signed main()
{
    int n;
    cin>>n;
    fibonacci(n);
}