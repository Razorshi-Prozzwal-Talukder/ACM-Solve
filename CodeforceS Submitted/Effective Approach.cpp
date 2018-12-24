#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ns[10000009], ms[10000009];
main()
{
    ll n, m;
    while(cin>>n)
    {
        ll i, j, vasaya=0, pataya=0, k, l;
        for(i=1; i<=n; i++)
        {
            cin>>k;
            ns[k]=i;
        }
        cin>>m;
        for(j=1; j<=m; j++)
        {
            cin>>l;
            vasaya = vasaya + ns[l];
            pataya = pataya + (n - ns[l] +1);
        }

        cout<<vasaya<<" "<<pataya<<endl;
    }
    return 0;
}

