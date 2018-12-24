#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n,m1,i,m2;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        else
        {
            if(n>=101)
            {
                m1=n-10;
                printf("f91(%lld) = %lld\n",n,m1);
            }
            if(n<=100)
            {
                for(i=n;i<101 ;i++)
                {
                    m1= i+11;
                    if(m1>=101)
                        m1-=10;
                }
                printf("f91(%lld) = %lld\n",n,m1-10);
            }
        }
    }
    return 0;
}
