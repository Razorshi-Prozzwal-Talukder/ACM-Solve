#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Press the first number: ");
    scanf("%d", &num1);
    printf("Press the second number: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);

    return  0;
}
