#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n, sum=0;
    while(scanf("%lld",&n)==1)
    {
        if(n<=0)break;
        else if(n==1)
            printf("%lld%c\n",sum=0,37);
        else
            printf("%lld%c\n",n*25,37);

    }
    return 0;
}
