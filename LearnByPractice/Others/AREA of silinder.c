#include<stdio.h>
float main()
{
    float a,b,c,d;
    a=3.1416;
    printf ("please enter the radius : ");
    scanf("%f",&b);
    printf("please enter the height :") ;
    scanf("%f",&c);
    d=a*b*b*c;
    printf("%f is the area of cylinder", d);
return 0;

}
