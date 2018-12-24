#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    ll l, r, x, y, k;
    while(cin>>l>>r>>x>>y>>k)
    {
        ll i, j;
        if(r<x)printf("NO\n");
        else
        {
            for(i=x; i<=y; i++)
            {
               if(i*k>=l && i*k<=r)
               {
                   printf("YES\n");
                   return 0;
               }
            }
            printf("NO\n");
        }
    }
    return 0;
}
