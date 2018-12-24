#include<stdio.h>
int main()
{
    int a,b,w=0,x=0,y=0,z=0;
    for(a=1; a<=5; a++)
    {
        scanf("%d",&b);
        if(b%2==0)
        {
            w++;
        }
        if(b%2!=0)
        {
            x++;
        }
        if(b>=0)
        {
            y++;
        }
        if(b<0)
        {
            z++;
        }
    }
    printf("total Even Number is: %d\n",w);
    printf("Total Odd  number is: %d\n",x);
    printf("Total positive Number: %d\n",y);
    printf("Total Negative Number is: %d\n",z);

    return 0;
}

