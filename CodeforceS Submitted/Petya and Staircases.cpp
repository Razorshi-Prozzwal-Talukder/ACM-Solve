#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll d[100000];
main()
{
    ll m, n;
    while(cin>>n>>m)
    {
        ll i, as, p=0;
        for(i=1; i<=m; i++)cin>>d[i];
        sort(d, d+m+1);
 //for(i=1; i<=m; i++)cout<<d[i];
        if(d[1]!=1 && d[m]!=n)
        {
            for(i=1; i<=m; i++)
            {
               as = d[i];
               if(as+1==d[i+1] && as+2==d[i+2])
               {
                   p=1;
                   printf("NO\n");
                   break;
               }
            }
            if(p==0)printf("YES\n");
        }
        else
            printf("NO\n");
    }
}
