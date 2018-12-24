#include<stdio.h>
int add(int x, int y)
{
    int result;
    result=x+y;
    return result;

}

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=add(a,b);
    printf("SUM is: %d\n",c);
}

