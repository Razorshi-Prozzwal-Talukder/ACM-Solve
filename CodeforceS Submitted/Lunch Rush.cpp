#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n, k;
    while(cin>>n>>k)
    {
        ll i, fi, ti, sum=0, d;
        for(i=0; i<n; i++)
        {
            cin>>fi>>ti;
            if(ti>k)d = fi-(ti-k);
            if(ti<=k)d = fi;
            if(i==0)sum = d;
            if(i>0)
                if(sum<d)sum=d;
        }
        cout<<sum<<endl;
    }
    return 0;
}
