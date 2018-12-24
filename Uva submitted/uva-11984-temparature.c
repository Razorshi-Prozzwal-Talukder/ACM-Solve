#include<stdio.h>
int main()
{
    long int C,d,i,T;
    double f1,f2;
    while(scanf("%ld",&T)==1)
    {


    for(i=1; i<=T; i++)
    {
        scanf("%ld %ld",&C,&d);
        f1=9*(double)C/5+ (double)d;
        f2=(f1*5)/9;

        printf("Case %ld: %0.2lf\n",i,f2);


    }

   }

    return 0;

}

