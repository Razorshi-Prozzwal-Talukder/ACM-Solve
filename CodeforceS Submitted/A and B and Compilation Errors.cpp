#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

main()
{
    ll n;
    while(cin>>n)
    {
        ll i, a, sum1=0, sum2=0;
        for(i=1; i<=n; i++)cin>>a, sum1+=a;
        for(i=1; i<=n-1; i++)cin>>a, sum2+=a;
        ll p = sum1-sum2;
        sum1 = sum2;
        sum2=0;
        for(i=1; i<=n-2; i++)cin>>a, sum2+=a;
        ll q = sum1-sum2;
       cout<<p<<endl;
       cout<<q<<endl;
    }
    return 0;
}
