#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int x,y,t,i;
    while(scanf("%lld",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            printf("\n");
            scanf("%lld",&y);
            if(y>=1)
            x=sqrt(y);
            printf("%lld\n",x);
        }
        printf("\n");
    }
    return 0;
}
