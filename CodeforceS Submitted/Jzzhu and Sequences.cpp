#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a=1000000007;
main()
{
    ll x, y, n;
    while(cin>>x>>y>>n)
    {
        ll ans;
        n = n%6;
        if(n==1)ans = x;
        else if(n==2)ans = y;
        else if(n==3)ans = y-x;
        else if(n==4)ans = -x;
        else if(n==5)ans = -y;
        else if(n==0)ans = x-y;

        ans = ((ans%a)+a)%a;

        cout<<ans<<endl;
    }
    return 0;
}
