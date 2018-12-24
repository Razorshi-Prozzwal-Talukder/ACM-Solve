#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[1000000+999];
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, cnt=0;
        for(i=0; i<n; i++)
            cin>>ar[i];
        sort(ar, ar+n);
        for(i=1; i<n-1; i++)
            if(ar[i]>ar[0] && ar[i]<ar[n-1])cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
