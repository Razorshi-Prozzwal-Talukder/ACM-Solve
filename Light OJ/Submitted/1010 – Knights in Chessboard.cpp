#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
main()
{
    int i, tast, n, m, ans;
    sc("%d", &tast);
    for(i=1; i<=tast; i++)
    {
        sc("%d %d", &n, &m);
        if(n==1 || m==1)pf("Case %d: %d\n", i, n*m);
        else if(n==2 ||m==2)
        {
            ans = ((n*m)/8)*4;
            if((n*m)%8==2)ans=ans+2;
            else if((n*m)%8==4 ||(n*m)%8==6)
                ans=ans+4;
            pf("Case %d: %d\n", i, ans);
        }
        else
            pf("Case %d: %d\n", i, ((n*m)+1)/2);
    }
    return 0;
}
