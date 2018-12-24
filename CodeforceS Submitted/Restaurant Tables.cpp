#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll as[200005];
main()
{
    ll n, a, b;
    while(cin>>n>>a>>b)
    {
        ll i, sum=0, c;
        c=2*b;
        for(i=1; i<=n; i++)cin>>as[i];
        for(i=1; i<=n; i++)
        {
           if(as[i]==1)
           {
               if(a>0)a--;
               else
               {
                  if(c>0)b--, c--;
                  else
                    sum = sum + 1;
               }
           }
           else
           {
               if(b>0)b--, c-=2;
               else
                sum+=2;
           }
        }
        //for(i=1; i<=n; i++)sum = sum + as[i];
        cout<<sum<<endl;
    }
    return 0;
}
