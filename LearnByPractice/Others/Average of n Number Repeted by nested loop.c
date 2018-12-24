#include<stdio.h>
main()
{
    int n, count, loops, loopcount;
    float x, sum=0, avg;
    printf("How Many lists: ");
    scanf("%d", &loops);

    for(loopcount = 1; loopcount<=loops; loopcount++)
    {
        printf("\n\nList number : %d\nHow many Numbers? :",loopcount);
        scanf("%d", &n);
        for(count=1; count<=n; count++)
        {
            printf("x=\t");
            scanf("%f", &x);
            sum+=x;

        }
        avg = sum/n;
        printf("\nAverage Number: %0.2f", avg);
    }

    return 0;
}

