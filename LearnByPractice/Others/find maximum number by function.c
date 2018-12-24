/*Here is find out the largest number from three Numbers*/
#include<stdio.h>
int maximum(int x, int y)
{
    int z;
    z = (x>y) ? x : y;
    return(z);
}
main()
{
    int a,b,c,d;

    printf("Press Your first Number: ");
    scanf("%d", &a);
    printf("Press Your second Number: ");
    scanf("%d", &b);
    printf("Press Your third Number: ");
    scanf("%d", &a);

    printf("\n\nThe Maximum Number is : %d\n\n", maximum(c, maximum(a,b)));
}
