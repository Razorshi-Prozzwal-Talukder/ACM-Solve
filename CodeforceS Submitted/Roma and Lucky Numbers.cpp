#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000000];
main()
{
    ll n, k;
    while(cin>>n>>k)
    {
        ll j, i, cnt=0, m, x;
       // char s[1000];
        for(i=1; i<=n; i++)cin>>a[i];
        for(i=1; i<=n; i++)
        {
            ll p=0;
            m=a[i];
            while(m!=0)
            {
                x = m%10;
                if(x==4 || x==7)p++;
                m = m/10;
            }
            if(p<=k)cnt++;

        }
        cout<<cnt<<endl;
    }
    return 0;
}
