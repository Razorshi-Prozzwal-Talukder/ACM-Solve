#include<bits/stdc++.h>
using namespace std;
main()

{
    double x, sin_val, val, pi,sum , rad_val, rad, nos;

    pi = 3.14159265359;


    while(scanf("%lf %lf",&rad,&nos)==2)
    {
        if((rad>0 && rad<20000) && (2<nos && nos<20000))
        {
            val = pi / 180.00;
            x=360.00/nos;
            sin_val = sin(x*val);
            rad_val=(rad*rad);
            sum=( rad_val * nos * sin_val)/2.00;
            printf("%0.3lf\n",sum);
        }
        else
            break;
    }

    return 0;
}







