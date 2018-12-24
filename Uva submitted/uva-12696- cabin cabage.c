#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    long int n,i,j=0;

    while(scanf("%ld",&n)==1)
    {

    for(i=1; i<=n; i++)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        if((a<=56.00&&b<=45&c<=25.00&&d<=7.00)||(d<=7.00 && a+b+c<125.00))
        {
            printf("1\n");
            j++;
        }
        else
        {
            printf("0\n");
        }
    }
    printf("%ld\n",j);
    j=0;
    }

    return 0;
}
