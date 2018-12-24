#include<stdio.h>
int main()
{
    int i,n;
    i=1;
    printf("Press any Number: ");

    scanf("%d", &n);

    for(;i<=10; i++)
    {
        printf("%d * %d = %d\n", n,i,n*i);
    }
    return 0;
}
