#include<stdio.h>
int main()
{
    long long int i,n,j,sum;
    while(scanf("%lld",&n)==1)
    {
        sum=0;

        if(0<=n && n<=210000000)
        {
            sum=((n*(n+1))/2)+1;
            printf("%lld\n",sum);
        }
        if(n<0)
        {
            break;
        }



    }
    return 0;
}

