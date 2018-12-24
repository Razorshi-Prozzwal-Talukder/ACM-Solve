#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n, x;
    while(cin>>n>>x)
    {
        ll i, a, b, j=1, cnt=0 ;
        for(i=1; i<=n; i++)
        {
            cin>>a>>b;
            for(j; j<=b; )
            {
                if((j+x)-1<a)j=j+x;
                else
                {
                    cnt++;
                    j++;
                }
            }
            //cout<<cnt<<endl;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
