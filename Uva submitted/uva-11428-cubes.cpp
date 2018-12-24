#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int i,n,x,y,frlp_brk=0,s1,s2;

    for(i=1; i<=100; i++)
    {
        scanf("%lld",&n);
        if(n==0)break;

        for(x=1; x<=60; x++)
        {
            frlp_brk = 0;
            for(y=1; y<x; y++)
            {
                s1=pow(x,3);
                s2=pow(y,3);
                if(s1-s2 == n)
                {
                    printf("%lld %lld\n",x,y);
                    frlp_brk++;
                }
                if(frlp_brk==1)break;
            }
            if(frlp_brk==1)break;
        }
        if(frlp_brk==0)
            printf("No solution\n");

    }
    return 0;
}
