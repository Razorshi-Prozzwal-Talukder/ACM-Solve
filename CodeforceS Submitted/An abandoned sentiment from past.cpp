#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
main()
{
    ll a, b, as[100005], bs[100005];
    while(cin>>a>>b)
    {
        ll i, ok=0, in=0;
        for(i=0; i<a; i++)cin>>as[i];
        for(i=0; i<b; i++)cin>>bs[i];

        sort(bs, bs+b);
        reverse(bs, bs+b);

       // for(i=0; i<b; i++)cout<<bs[i];

        for(i=0; i<a; i++)
        {
            if(as[i]==0)as[i]=bs[in++];
        }
         for(i=1; i<a; i++)
         {
             if(as[i]<=as[i-1])
             {
                 ok=1;
                 break;
             }
         }
         if(ok==1)printf("YES\n");
         else
            printf("NO\n");
    }
    return 0;
}
