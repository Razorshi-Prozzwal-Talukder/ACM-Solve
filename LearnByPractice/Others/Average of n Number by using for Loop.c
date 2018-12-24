/* calculate the average number of n numbers*/

#include<stdio.h>
main()
{
    int n, count;
    float x, avg, sum=0;

    printf("How many Numbers: : ");
    scanf("%d", &n);
    printf("\n\n");

    for(count=1; count<=n; count++)
    {
        printf("x =\t");
        scanf("%f", &x);
        sum+=x;
    }

    avg = sum/n;
    printf("Average Number is : %0.2f", avg);

    return 0;
}

