#include<bits/stdc++.h>
#define ll long long
ll as[100000];
using namespace std;

main()
{
    ll  n, k, sum, ans;
    while(cin>>n>>k)
    {
        ll i, total=INT_MAX;
        for(i=1; i<=n; i++)cin>>as[i];
        for(i = 1 ; i<=k; i++)
        {
            sum=0;
            for(ll j=i; j<=n; j+=k)sum+=as[j];

            if(sum<total)
            {
                total = sum;
                ans = i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
