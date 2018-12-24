#include<stdio.h>
int main()
{
    int n,m1,m2,sum=0;
    while(scanf("%d",&n)==1)
    {
        sum=n;
        if(n==1)
        {
            printf("%d\n", sum);
            sum=0;
        }
        if(n==2)
        {
            printf("%d\n",sum+1);
            sum=0;
        }
        if(n>=3)
        {
            sum=n;
            while(3<=n)
            {
                m1=n/3;
                m2=n%3;
                n=m1+m2;
                sum+=m1;
            }
            if(n==2)
                printf("%d\n",sum+1);
            else
            {
                printf("%d\n",sum);
                sum=0;
            }
        }

    }
    return 0;
}
