#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Press any Number: ");
    scanf("%d", &n);
    for(i=n; i>=1; i--)///this i using for per line
    {
        for(j=1; j<=i; j++)///this j is using for printing *
        {
            printf("*");
        }
        printf("\n");
    }
}
