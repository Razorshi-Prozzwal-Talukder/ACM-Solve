#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x[100001], y[100001], cnt[100001];
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, home, away;
        for(i=1; i<=n; i++)
        {
            cin>>x[i]>>y[i];
            cnt[x[i]]++;
        }
        for(i=1; i<=n; i++)
        {
            home = n-1;
            home = home + cnt[y[i]];
            away = 2*(n-1) - home;

            cout<<home<<" "<<away<<endl;
        }
    }
    return 0;
}
