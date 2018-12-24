#include<stdio.h>
int main()
{
    long long int i,t,n,a,b,c,d;


    while(scanf("%lld",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lld",&n);


            a=((((((n*567)/9)+7492)*235)/47)-498);
            b=a/10;
            c=b%10;
            if(c<0)
            {
                d=c*-1;
                printf("%lld\n",d);
            }
            else
            {
                printf("%lld\n",c);
            }



        }
    }

    return 0;
}
