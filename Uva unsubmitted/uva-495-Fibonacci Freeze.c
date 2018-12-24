#include<stdio.h>///done
int main()
{
    long long int a,b,c,d,i,j,k;
    long long int n;
    scanf("%lld",&n);
    a=0;
    b=1;
    c=a+b;
    if(n==0)
    {
        printf("The Fibonacci number for %lld is %lld\n",n,a);
    }
    if(n==1)
    {
        printf("The Fibonacci number for %lld is %lld\n",n,b);
    }
   if(n==2)
   {
       printf("The Fibonacci number for %lld is %lld\n",n,c);
   }
   if(n>2)

    {
        for(i=3; i<=n; i++)
        {
            a=b;
            b=c;
            c=a+b;
        }
        printf("The Fibonacci number for %lld is %lld\n",n,c);
    }
}
