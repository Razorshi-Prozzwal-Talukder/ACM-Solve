#include<stdio.h>
int main()
{
    int i=1;
    int n;
    scanf("%d",&n);
    if(2<n<1000)

    {
        while(i<=10)
    {
        printf("%d * %d = %d\n", i,n,i*n);
        i++;
    }
    }
    return 0;
}
