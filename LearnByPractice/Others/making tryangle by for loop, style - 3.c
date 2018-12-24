#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Press any Number: ");
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(k=n; k>=i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

