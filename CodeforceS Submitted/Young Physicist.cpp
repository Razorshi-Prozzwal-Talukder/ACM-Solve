#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int sum1=0, sum2=0, sum3=0, x, y, z;
        for(int i=1; i<=n; i++)
        {
            cin>>x>>y>>z;
            sum1+=x;
            sum2+=y;
            sum3+=z;
        }
        if(sum1==0 && sum2==0 && sum3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
