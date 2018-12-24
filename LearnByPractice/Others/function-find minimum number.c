#include<stdio.h>
int number(int array[5])
{
    int a,b,c;
    for(a=0; a<5; a++)
    {
        if(a==0)
        {
            b=array[a];
             c=b;

        }

        if(b>array[a])
        {
            b=array[a];
            c=b;
        }
    }
    return c;
}
int main()
{
    int x,y,z,p[5];
    for(x=0; x<5; x++)
    {
        scanf("%d",&p[x]);
    }
    z=number(p);
    printf("Minimum Number is: %d\n",z);
}
