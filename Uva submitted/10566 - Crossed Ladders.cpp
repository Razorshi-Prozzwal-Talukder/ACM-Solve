#include<bits/stdc++.h>
using namespace std;
double x, y, c;
double solve(double mid)
{
    double a = sqrt((x*x) - (mid*mid));
    double b = sqrt((y*y) - (mid*mid));

    return ((a*b)/(a+b));
}
main()
{
    while(cin>>x>>y>>c)
    {
        double low=0, high=min(x, y), mid;
        int cnt=100;
        while(cnt--)
        {
            mid = (low+high)/2.0;
            if(solve(mid)<=c)
                high=mid;
            else
                low = mid;
        }
        printf("%0.3lf\n", low);
    }
    return 0;
}
