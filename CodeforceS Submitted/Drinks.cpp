#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, a, sum1=0;
    while(cin>>n)
    {
        double sum;
        for(int i=1; i<=n; i++)
        {
            cin>>a;
            sum1 = sum1 + a;
        }
        sum = (double)sum1/n;
        printf("%0.12lf\n", sum);
    }
    return 0;
}
