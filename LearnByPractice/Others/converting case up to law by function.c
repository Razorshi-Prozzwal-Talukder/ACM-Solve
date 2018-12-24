#include<stdio.h>
char lower_to_upper(char c1) /*function definition*/
{
    char c2;
    c2 = (c1 >= 'a' && c1 <= 'z')?('A'+c1-'a') : c1;
    return c2;
}
void main(void)
{
    char lower,upper;

    printf("Please enter a lowercase character: ");
    scanf("%c", &lower);
    upper = lower_to_upper(lower);
    printf("\nThe uppercase is %c\n",upper);

}
