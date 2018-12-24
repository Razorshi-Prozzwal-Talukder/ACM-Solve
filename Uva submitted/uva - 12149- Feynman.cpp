#include<bits/stdc++.h>
using namespace std;
main()
{
    long long  int i,sum=0,n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        else if(1<=n<=100)
        {
            for(i=n; i>=1; i--)
            {
                sum+=(i*i);
            }
            printf("%lld\n",sum);
            sum=0;
        }
    }
    return 0;
}
