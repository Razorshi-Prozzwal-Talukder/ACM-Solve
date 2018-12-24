#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592653589793
main()
{
    double a,b,c,s,area_of_triangle,r,area_of_circle,sunflower,radious_of_incr;
    double area_of_incr,red,violets;

    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        if(a<=b&&b<=c&&c<=1000){
        s = (a+b+c)/2.00;
        area_of_triangle = sqrt(s*(s-a)*(s-b)*(s-c));
        r=(a*b*c)/(4*area_of_triangle);
        area_of_circle = pi*r*r;
        sunflower = area_of_circle - area_of_triangle;
        radious_of_incr = area_of_triangle/s;
        area_of_incr = pi*radious_of_incr*radious_of_incr;
        red = area_of_incr;
        violets = area_of_triangle - red;

        printf("%0.4lf %0.4lf %0.4lf\n",sunflower,violets,red);
        }



    }
    return 0;
}
