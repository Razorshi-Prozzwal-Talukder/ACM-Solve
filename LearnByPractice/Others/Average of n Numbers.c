/* calculate the average number of n numbers*/

#include<stdio.h>
int main()
{
    int n, count=1;
    float x, avg, sum=0;

    printf("How many Numbers: : ");
    scanf("%d", &n);
    while(count<=n)
    {

        printf(" \nx= "),
        scanf("%f", &x);
        sum+=x;
        count++;
    }

    avg = sum/n;
    printf("\nThe Average Number is : %0.2f ", avg);

    return 0;
}

