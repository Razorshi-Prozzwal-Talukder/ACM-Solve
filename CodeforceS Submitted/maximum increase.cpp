#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll as[100000];
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, tot=1, ans=1;
        for(i=1; i<=n; i++)
            cin>>as[i];

            for(i=2; i<=n; i++)
            {
                ans=max(ans, tot);
                if(as[i]<=as[i-1])tot=1;
                else
                    tot++;

                   // cout<<tot<<endl;
            }
            ans=max(ans, tot);
            cout<<ans<<endl;
    }
    return 0;
}
