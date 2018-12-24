#include<stdio.h>
int main()
{
    int decimalnum,remainder,quotient,binarynum[100];
    int i=1,j;

    printf("Print any decimal Number: ");

    scanf("%d",&decimalnum);
    quotient=decimalnum;
    while(quotient != 0)
    {
        binarynum[i++]=quotient%2;
        quotient = quotient/2;
    }
   printf("Its Binary Number Is: ");

    for(j=i-1; j>0; j--)

        printf("%d",binarynum[j]);
    return 0;
}
