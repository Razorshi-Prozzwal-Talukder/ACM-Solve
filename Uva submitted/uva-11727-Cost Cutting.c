#include<stdio.h>///submitted
int main()
{
    int n,i,a,b,c,first,second,third;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a>c)
        {
            if(b>c)
            {
                first=a;
                second=b;
                third=c;

                printf("Case %d: %d\n",i,second);
            }
            else
            {
                first=a;
                second=c;
                third=b;

                printf("Case %d: %d\n",i,second);

            }
        }

        else if(b>a && b>c)
        {
            if(a>c)
            {
                first=b;
                second=a;
                third=c;

                printf("Case %d: %d\n",i,second);
            }
            else
            {
                first=b;
                second=c;
                third=a;

                printf("Case %d: %d\n",i,second);

            }

        }

         else if(c>a && c>b)
         {
            if(b>a)
            {
                first=c;
                second=b;
                third=a;

                printf("Case %d: %d\n",i,second);
            }
            else
            {
                first=c;
                second=a;
                third=b;

                printf("Case %d: %d\n",i,second);

            }

         }
    }

    return 0;



}
