#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int test,i,e,f,c,n,m1,m2,sum=0;
    while(scanf("%lld",&test)==1)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%lld %lld %lld",&e,&f,&c);
            n=e+f;
            while(c<=n)
            {
                m1=n/c;
                m2=n%c;
                sum+=m1;
                n=m1+m2;
            }
            printf("%lld\n",sum);
            sum=0;
        }

    }
    return 0;
}
