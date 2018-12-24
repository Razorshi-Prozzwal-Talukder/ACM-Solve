#include<stdio.h>
int main()
{
    int i;
    int n;

    printf("Here You can know Any kind Of Namota. You can Check. \n");
    printf("Press Your Number: ");


    while(scanf("%d",&n)==1)
    {

         i=1;
        while(i<=10)
        {
            printf("%d * %d = %d\n", i,n,i*n);
            i++;

        }
    }

    return 0;
}
