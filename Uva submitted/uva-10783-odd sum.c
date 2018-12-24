#include<stdio.h>///submitted
int main()
{
    int n,a,b,c,d,i,j,k,sum=0;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&a,&b);

        if(a<b)
        {
            for(j=a; j<=b; j++)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }
            }
            printf("Case %d: %d\n",i,sum);
            sum = 0;
        }

        else
        {
            for(j=b; j<=a; j++)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }
            }
            printf("Case %d: %d\n",i,sum);
            sum=0;
        }
    }

    return 0;

}
