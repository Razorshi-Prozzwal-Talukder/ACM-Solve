#include<stdio.h>
int main()
{
    int x,y,m,sum=0;
    printf("Press Any Tow Number: ");
    scanf("%d %d", &x,&y);
    if(x<y)
    {
        m=x+1;
        for(m; m<y; m++)
        {
            if(m%2!=0)
            {
                sum+=m;
            }
        }
        printf("Total Value of Odd Number is: %d\n",sum);
    }
    else if(x>y)
    {
        m=y+1;
        for(m; m<x; m++)
        {
            if(m%2!=0)
            {
                sum+=m;
            }
        }
        printf("Total Value of Odd Number is: %d\n",sum);
    }
    else if(x==y)
    {
        printf("Total Value of Odd Number is: 0\n");
    }

    return 0;
}

