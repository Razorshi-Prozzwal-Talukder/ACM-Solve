#include<stdio.h>
int main()
{
    char name[30];
    float s1, s2, s3, avg;

    printf("Please Enter your name: ");
    scanf("%[^\n]", name );

    printf("Please Enter the First score: ");
    scanf("%f", &s1);

    printf("Please Enter the Second score: ");
    scanf("%f", &s2);

    printf("Please Enter the Third score: ");
    scanf("%f", &s3);

    avg = (s1+s2+s3)/3;

    printf("\n\nName: %s\n\n", name);
    printf("Score 1 is:\t%f\n",s1);
    printf("Score 2 is:\t%f\n",s2);
    printf("Score 3 is:\t%f\n",s3);

    printf("\n\nAverage is:\t%f\n",avg);

    return 0;

}

