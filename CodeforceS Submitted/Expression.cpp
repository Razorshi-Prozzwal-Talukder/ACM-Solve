#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int sum1, sum2, sum3, sum4, sum5;
        sum1= a + (b * c);
        sum2= a * (b + c);
        sum3= a * b * c;
        sum4= (a + b) * c;
        sum5= a + b + c;
        int res = max(sum5, max(sum1, max(sum2, max(sum3, sum4))));
        cout<<res<<endl;
    }
    return 0;
}
