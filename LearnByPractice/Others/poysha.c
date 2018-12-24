#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,sum,sum2,sum3;
    scanf("%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f);
    sum = (a*1)+(b*5)+(c*10)+(d*25)+(e*50)+(f*1);
    sum2 = sum/100;
    sum3 = sum%100;
    printf("%d TAKA %d POYSHA",sum2, sum3);

    return 0;
}
