#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int s, d, sum=0, i;
    while(scanf("%lld %lld",&s,&d)==2)
    {
        for(i=s; ;i++)
        {
            sum+=i;
            if(sum>=d)break;
        }
        printf("%lld\n",i);
        sum=0;
    }
    return 0;
}
