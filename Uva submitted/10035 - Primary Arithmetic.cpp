#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int a, b, count, extra, sum;

    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        while(a!=0 ||b!=0)
        {
            sum = (a%10+b%10);
            if(sum + extra>9)
            {
                count++;
                extra=1;
            }
            else
            {
                extra=0;
            }
            a/=10;
            b/=10;
        }
        if(count==0)
        {
            printf("No carry operation.\n");
        }
        else if(count==1)
        {
            printf("%lld carry operation.\n",count);
        }
        else
        {
            printf("%lld carry operations.\n",count);
        }
        count=0;
        extra=0;
    }
    return 0;
}
