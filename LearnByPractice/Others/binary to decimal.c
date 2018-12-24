#include<stdio.h>///bn = binary Number, dn = decimal Number
int main()
{
    int bn, dn=0,j=1, remainder;
    scanf("%d",&bn);

    while(bn!=0)
    {
        remainder = bn%10;
        dn=dn+remainder*j;
        j=j*2;
        bn=bn/10;

    }
    printf("%d",bn);
}
