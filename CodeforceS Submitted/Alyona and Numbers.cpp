#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
main()
{
    ll n, m;
    while(cin>>n>>m)
    {
        ll i, ans=0;
        for(i=1; i<=n; i++)
            ans=ans+(m+(i%5))/5;
        cout<<ans<<endl;
    }
    return 0;
}
