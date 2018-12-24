#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n, x[10000],y,ans;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        else if(n==1||n==2)printf("%lld\n",n);
        else if(n>2)
        {
            x[1]=1;
            x[2]=2;
            for(y=3; y<=n; y++)
            {
                x[y]=x[y-1]+x[y-2];
                ans = x[y];
            }
            printf("%lld\n",ans);
        }
    }
    return 0;
}
