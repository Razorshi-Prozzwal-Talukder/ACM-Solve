#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000005];
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, ans = 0;
        for(i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        for(i=0; i<n; i++)
           ans = ans + (a[n-1]-a[i]);
        cout<<ans<<endl;
    }
    return 0;
}
