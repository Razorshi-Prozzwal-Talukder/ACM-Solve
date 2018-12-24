/*converting letter from one case to another case*/
#include<stdio.h>
int main()
{
    char ch, lower, upper;
    printf("Press any letter: ");
    scanf("%c", &ch );
    if(ch >= 'a' && ch<= 'z')
    {
        upper = toupper(ch);
        printf("Converting case is : %c", upper);
    }
    else if(ch>='A' && ch<='Z')
    {
        lower = tolower(ch);
        printf("Converting case is: %c", lower);
    }
    else
    {
        printf("Error");
    }
    return 0;
}

