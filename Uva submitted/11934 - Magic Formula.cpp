#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int a,b,c,d,L, x, function, count=0;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && L==0)
            break;

        else
        {
            for(x=0; x<=L; x++)
            {
               function = (a*(x*x))+(b*x)+c;
               if(function%d==0)
                  count++;
            }
            cout<<count<<endl;
            count=0;
        }
    }
    return 0;
}
