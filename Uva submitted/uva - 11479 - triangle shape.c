#include<stdio.h>
int main()
{
    long long int t,a,b,c,d,i;
    scanf("%lld",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a<b+c && b<a+c && c<a+b)
        {
            if(a==b && b==c)
            {
                printf("Case %lld: Equilateral\n",i);
            }
            else if((a==b) || (b==c) || (c==a))
            {
                printf("Case %lld: Isosceles\n",i);
            }
            else
            {
                printf("Case %lld: Scalene\n",i);
            }
        }
        else
        {
            printf("Case %lld: Invalid\n",i);
        }
    }


}
