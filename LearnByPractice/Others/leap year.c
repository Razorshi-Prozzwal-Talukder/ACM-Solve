#include<stdio.h>
int main()
{
    int year;
    printf("Here You can Check any Year..Which is Leap Year or Not.\nPleasE Press Any Year which You want: ");
    scanf("%d", &year);
    if(year%4==0)
    {

        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("%d is A Leap Year", year);
            }
            else
            {
                printf("%d is Not Leap Year", year);
            }

        }
        else
        {
            printf("%d is A Leap Year", year);
        }

    }
    else
    {
        printf("%d is Not Leap Year", year);

    }
    return 0;
}

