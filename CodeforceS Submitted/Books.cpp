#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005];
main()
{
    ll n, t;
    while(cin>>n>>t)
    {
        ll i, c=0, sum=0, k, ans=0;
        for(i=0; i<n; i++)cin>>a[i];
        // sort(a, a+n+1);
        i=0;
        for(k=0; k<n; k++)
        {
            sum+=a[k];
            c++;
            while(sum>t && i<=k)
            {
                sum-=a[i];
                c--;
                i++;
            }
             ans = max(ans, c);
        }
        cout<<ans<<endl;
    }
    return 0;
}
