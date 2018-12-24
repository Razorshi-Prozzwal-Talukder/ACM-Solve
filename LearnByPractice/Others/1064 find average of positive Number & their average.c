#include<stdio.h>
int main()
{
    float x,y,sum=0,avg;
    int a,b=0;
    for(a=1; a<=6; a++)
    {
        scanf("%f", &x);
        if(x>=0)
        {
            b++;
            y=x;
            sum=sum+y;
        }
    }
    avg = sum/b;
    printf("%d valores positivos\n",b);
    printf("%0.1f\n",avg);

    return 0;
}

