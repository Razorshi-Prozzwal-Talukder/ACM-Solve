#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c, d, e, f;
ll as[100005];

int fn( int n )
{
    for(int i=0; i<=n; i++)
    {
        if( i == 0 ) {as[i]=a; continue;}
        if( i == 1 ) {as[i]=b; continue;}
        if( i == 2 ) {as[i]=c; continue;}
        if( i == 3 ) {as[i]=d; continue;}
        if( i == 4 ) {as[i]=e; continue;}
        if( i == 5 ) {as[i]=f; continue;}

        as[i] = as[i-1]+as[i-2]+as[i-3]+as[i-4]+as[i-5]+as[i-6];
    as[i] = as[i] % 10000007;
    }
    return as[n];

}
main()
{
    ll n, caseno = 0, cases;
    cin>>cases;
    for(ll i=1; i<=cases; i++)
    {
        cin>>a>>b>>c>>d>>e>>f>>n;
        ll ans = fn(n);
        ans = ans%10000007;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
