#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[1000000];
main()
{
    ll n, m;
    while(cin>>n>>m)
    {
        ll i, a, c, b;
        for(i=1; i<=m; i++)cin>>ar[i];
        a=1, c=0;
        for(i=1; i<=m; i++)
        {
            b = ar[i];
            if(a<=b)
            {
                c = c+b-a;
                a = b;
            }
            else
            {
                c = c+n-a+b;
                a = b;
            }
        }
        printf("%I64d\n", c);
    }
    return 0;
}
