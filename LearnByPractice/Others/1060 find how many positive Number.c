#include<stdio.h>
int main()
{
    float j;
    int i, k=0;
    for(i=1; i<=6; i++)
    {
        scanf("%d", &j);
        if(j>=0)
        {
            k++;

        }
    }
     printf("%d valores positivos", k);
     return 0;
}
