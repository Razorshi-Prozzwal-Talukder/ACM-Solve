#include<stdio.h>
int main()
{
    int m,n,sum;
    while(scanf("%d %d",&m,&n)==2)
    {
        if((m>=1 && m<=300) && (n>=1 && n<=300))
        sum= (m*n)-1;
        printf("%d\n",sum);
    }
    return 0;
}
