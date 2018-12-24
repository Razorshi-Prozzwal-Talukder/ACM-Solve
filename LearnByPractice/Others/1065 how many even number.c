#include<stdio.h>
int main()
{
    int x,y,z=0;
    for(x=1; x<=5; x++)
    {
        scanf("%d",&y);
        if(y%2==0)
        {
            z++;
        }
    }
    printf("Total Even Number is : %d\n",z);

    return 0;

}

