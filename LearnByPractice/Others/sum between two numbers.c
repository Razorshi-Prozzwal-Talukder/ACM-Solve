#include<stdio.h>
int main()
{
    int m,n,i,sum=0;
    while(scanf("%d %d",&m,&n)==2)
    {
        if(m>0 && n>0 && m>n)
        {
            for(i=n; i<=m; i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }
        else if(m>0 && n>0 && n>m)
        {
            for(i=m; i<=n;i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }

        else if(m>0 && n>0 && n==m)
        {
            for(i=n; i<=m; i++)
            {
              sum= sum+i;
              printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }
        else if(m<=0 || n<=0 )
           {
             break;
           }



    }
}

