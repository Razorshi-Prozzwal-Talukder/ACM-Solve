#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int i, j, v, p, c, as[10000], sa[10000];
        for(i=1; i<=n; i++)cin>>as[i];
        for(i=1; i<=m; i++)cin>>sa[i];
        sort(as, as+n+1);
        sort(sa, sa+m+1);
        v = as[1];
        p = as[n];
        c = sa[1];
        if(max(2*v, p)< c)cout<<max(2*v, p)<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
