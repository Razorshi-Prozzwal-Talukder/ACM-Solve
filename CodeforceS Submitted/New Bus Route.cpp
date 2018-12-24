#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll as[10000000];
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, dis, disn, ct;
        for(i=0; i<n; i++)
            cin>>as[i];

        sort(as, as+n);

        dis = abs(as[n-1]-as[0]);
       ct=0;
        for(i=1; i<n; i++)
        {
            disn = abs(as[i]-as[i-1]);
            if(disn<dis)
            {
                ct=0;
                dis = disn;
                    ct++;
            }
            else if(disn==dis)
                ct++;
        }
        cout<<dis<<" "<<ct<<endl;
    }
    return 0;
}
