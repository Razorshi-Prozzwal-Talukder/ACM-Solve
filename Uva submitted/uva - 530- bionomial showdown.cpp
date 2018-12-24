#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n, k, p, sum=1,i;

    while(scanf("%lld %lld",&n,&k)==2)
    {
        if(n==0 && k==0)break;
        else
        {
            if(k>n/2)
                k=n-k;

            for(i=0; i<k; i++)
            {
                sum*=(n-i);
                sum/=(i+1);
            }
            printf("%lld\n",sum);
        }
        sum=1;


    }
    return 0;

}
