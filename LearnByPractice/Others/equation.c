/*Question is: find the value of 'x' for this equation. The equation is : ax^2+bx+c=0*/

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root,x1,x2;
    printf("Press the value of a, b & c:\n");
    scanf("%f %f %f", &a, &b, &c);

    root = sqrt((b*b)-(4*a*c));
    if(root>=0&&a>0)
    {
        x1 = (-b+root)/(2*a);
        x2 = (-b-root)/(2*a);
        printf("%0.2f,%0.2f",x1,x2);
    }
    else
        printf("Not possible");

   return 0;
}


