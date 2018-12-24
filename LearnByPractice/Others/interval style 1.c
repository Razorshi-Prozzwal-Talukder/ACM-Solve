#include<stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    if(n>=0 && n<=100)
    {
        if(0.00<=n&&n<=25.00)
        {
            printf("Interval [0,25]\n");
        }
        if(25.00<n&&n<=50.00)
        {
            printf("Interval (25,50]\n");
        }
        if(50.00<n&&n<=75.00)
        {
            printf("Interval (50,75]\n");
        }
        if(75.00<n&&n<=100.00)
        {
            printf("Interval (75,100]\n");
        }

    }
    else
    {
        printf("Out of Interval\n");
    }
    return 0;
}
