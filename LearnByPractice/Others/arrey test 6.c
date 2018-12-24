/*Here press some number. where you input then thats should print*/
#include<stdio.h>
int main()
{
    int i,j, num[5];
    for(i=0; i<5; i++)
    {
        scanf("%d", &num[i]);
    }
    for(j=0; j<5; j++)
    {
        printf("%d\n", num[j]);
    }
    return 0;
}

