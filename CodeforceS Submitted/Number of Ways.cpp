#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[500005], ans, t;
main()
{
   // cout<<ans<<t;
    ll n;
    while(cin>>n)
    {
        ll i;
        for(i=0; i<n; i++)  cin>>a[i];
        for(i=1; i<n; i++)a[i]=a[i]+a[i-1];

        for(i=0; i<n-1; i++)
        {
            if(a[i]*3==a[n-1]*2)ans+=t;
            if(a[i]*3==a[n-1])t++;

           // cout<<ans<<" "<<t<<endl;
        }
        cout<<ans<<endl;
    }
}

