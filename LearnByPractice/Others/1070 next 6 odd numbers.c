#include<stdio.h>
int main()
{
    int x,y;
    printf("Press any Number: ");
    scanf("%d",&x);
    for(y=1; y<=12; y++)
    {
        if(x%2!=0)
        {
            printf("%d\n",x);

        }
        x++;

    }
    return 0;
}

