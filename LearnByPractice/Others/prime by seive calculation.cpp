#include<stdio.h>
int main()
{
    int i, j, k=5, c=5, p;
    for(i=1; i<=5; i++)
    {
        p=c;
        for(j=1; j<=k; j++, p--)
        {
            printf("%d", p);
        }
         printf("\n");
         c=c-1;
         k=k-1;
    }
    return 0;
}
