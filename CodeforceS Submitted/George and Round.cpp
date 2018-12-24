#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100000], b[100000];
main()
{
    ll n, m;
    while(cin>>n>>m)
    {
        ll i, x, j;
        for(i=0; i<n; i++)cin>>a[i];
        j=0;
        for(i=0; i<m; i++)
        {
           cin>>x;
           if(x>=a[j] && j<n)j++;
        }
        if(n-j<0)cout<<0<<endl;
        else
            cout<<n-j<<endl;
    }
    return 0;
}
