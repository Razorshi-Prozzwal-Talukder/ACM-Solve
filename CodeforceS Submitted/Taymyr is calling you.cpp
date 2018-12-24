#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,z, ar[100000];
    while(cin>>n>>m>>z)
    {
        int i, j, cn=0;
        for(i=n; i<=z; i=i+n)
            ar[i]=1;
        for(j=m; j<=z; j=j+m)
        {
            if(ar[j]==1)
                cn++;
        }
        cout<<cn<<endl;
    }
    return 0;
}
