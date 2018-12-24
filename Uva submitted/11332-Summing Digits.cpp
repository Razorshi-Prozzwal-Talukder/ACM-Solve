#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n1,a,b,sum3=0;
    while(scanf("%lld",&n1)==1)
    {
        if(n1==0)break;
        else
        {
            if(n1<=9)cout<<n1<<endl;
            else
            {
                while(n1>=9)
                {
                    do
                    {
                        a=n1%10;
                        sum3+=a;
                        n1/=10;
                    }
                    while(n1>0);
                    b=sum3;
                    n1=b;
                    if(n1%10==b)break;
                    sum3=0;
                }
                cout<<b<<endl;
                sum3=0;
            }
        }
    }
    return 0;
}
