#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n, x;
    while(cin>>n>>x)
    {
        ll i, j, c=0, k=n;

        for(i=1; i<=n; i++)
            if(x/i<=n && x%i==0)c++;
        cout<<c<<endl;
    }
    return 0;
}
