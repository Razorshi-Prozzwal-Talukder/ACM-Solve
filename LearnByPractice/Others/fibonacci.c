#include<stdio.h>
int main()
{
    int N;
    int i,a=0,b=1,c;
    printf("Press Any Number for print fibonacci series:  ");

    scanf("%d",&N);

    c=a+b;
    printf("%d %d ",a,b);
    printf("%d",c);
    for(i=1; i<N-2; i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf(" %d",c);
    }
    printf("\n");
    return 0;
}
