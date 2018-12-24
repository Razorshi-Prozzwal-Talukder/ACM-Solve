#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n,f,a,b,c,m;
    long long int i,sum=0;

    while(scanf("%lld", &n)==1)
    {
        if(n<20)
        {
            for(m=1; m<=n; m++)
            {
                scanf("%lld", &f);
                if(f>0 && f<20)
                {
                    for(i=1; i<=f; i++)
                    {
                        scanf("%lld %lld %lld",&a,&b,&c);
                        sum+=a*c;
                    }
                    printf("%lld\n",sum);
                    sum=0;
                }
            }

        }
    }
    return 0;
}
