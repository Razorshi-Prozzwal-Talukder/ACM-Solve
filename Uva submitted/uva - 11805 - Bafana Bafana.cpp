#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int test,i,n,k,p,a,b,c;
    while(scanf("%lld",&test)==1)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%lld %lld %lld",&n,&k,&p);
            if(2<=n<=23 && 1<=k<=n && 1<=p<=200)
            {
                for(a=k,b=0; b<=p ; a++,b++ )
                {
                  if(a>n && b<=p)
                  {
                      a=1;
                  }
                }
                printf("Case %lld: %lld\n",i,a-1);
            }
        }
    }
    return 0;
}
