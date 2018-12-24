#include<stdio.h>
int main()
{
    int N,x,y;
    printf("How Many Type Of Number: ");
    scanf("%d", &x);

    for(y=0; y<x; y++)
    {
        scanf("%d",&N);
        if(N==0)
        {
            printf("NULL\n");
        }
          if(N%2==0 && N>0)
        {
            printf("EVEN POSITIVE\n");
        }
         if(N%2==0 && N<0)
        {
            printf("EVEN NEGATIVE\n");
        }
        if(N%2!=0 && N>0)
        {
            printf("ODD POSITIVE\n");
        }
         if(N%2!=0 && N<0)
        {
            printf("ODD NEGATIVE\n");
        }
    }

    return 0;
}

