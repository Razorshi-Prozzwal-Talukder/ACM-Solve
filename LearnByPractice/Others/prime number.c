///find the Number which is prime or not

#include<stdio.h>
int main()
{
    int n,i,m=0;
    printf("Press any Number : ");
    scanf("%d", &n);
    if(n<2)
    {
        printf("%d is Not Prime", n);
    }
    else if(n==2)
    {
        printf("%d is Prime", n);
    }
    else if(n>2)
    {
        for(i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                m++;
                if(m>2)
                {
                    printf("%d is Not Prime", n);
                    break;
                }

            }
        }
        if(m==2)
                {
                     printf("%d is Prime", n);
                }


    }
    return 0;
}
