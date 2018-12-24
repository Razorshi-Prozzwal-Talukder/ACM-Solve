#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fac(ll n)
{
    return (n==1 || n==0)? 1:fac(n-1)*n;
}
main()
{
    ll a, b;
    while(cin>>a>>b)
    {
        ll ans1=1, ans2=1, i;
      //  for(i=1; i<=a; i++) ans1 = ans1 * i;
       // for(i=1; i<=b; i++) ans2 = ans2 * i;

      /*  ans1 = fac(a);
        ans2 = fac(b);*/


        cout<<fac(min(a, b))<<endl;
    }
    return 0;
}
