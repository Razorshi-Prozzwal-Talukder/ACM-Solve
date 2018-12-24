#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, digit=0;
        for(i=1; i<=n; i*=10)digit = digit + n - i + 1;
        cout<<digit<<endl;
    }
    return 0;
}
