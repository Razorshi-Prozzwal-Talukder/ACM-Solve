#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
main()
{
    ll n, t, i, a[100001];
    while(cin>>n>>t)
    {
        for(i=1; i<n; i++)
            cin>>a[i];
        ll j=1;
        while(j<t)
            j=j+a[j];
        if(j==t)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
