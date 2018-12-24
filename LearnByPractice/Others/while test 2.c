#include<stdio.h>
int main()
{
    int i=1;
    while(i<=50)
    {
        if(i%2==0)
        {
            printf("%d  is a Even Number.\n",i);
        }
        else{
            printf("%d  is a Odd  Number.\n",i);
        }
        i++;
    }
    return 0;
}
