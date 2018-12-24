#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ab[1000];
main()
{
    ll n, m;
    while(cin>>n>>m)
    {
        ll i, j, maxi=-1, x, pos;
        for(i=1; i<=n; i++)ab[i]=0;

        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin>>x;
                if(x>maxi)
                {
                    maxi=x;
                    pos=j;
                }
            }
            ab[pos]=ab[pos]+1;
            maxi=-1;
        }
        pos=1, i=1;
      while(i<=n)
      {
          if(ab[pos]<ab[i])pos=i;
          i++;
      }
      cout<<pos<<endl;
    }
    return 0;
}
