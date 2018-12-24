/* calculate the average number of n numbers*/

#include<stdio.h>
main()
{
    int n, count=1;
    float x, avg, sum=0;

    printf("How many Numbers: : ");
    scanf("%d", &n);
    printf("\n\n");
    do
    {
        printf("x = ");
        scanf("%f", &x);
        sum+=x;
        count++;
    }
    while(count<=n);

    avg = sum/n;
    printf("Average Number is : %0.2f", avg);

    return 0;
}


