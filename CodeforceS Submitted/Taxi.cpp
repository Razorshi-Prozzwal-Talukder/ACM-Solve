#include<bits/stdc++.h>
using namespace std;
main()
{
    long int n;
    while(scanf("%ld",&n)==1)
    {
        long int i, t4=0, t3=0, t2=0, t1=0, digit;
        for(i=0; i<n; i++)
        {
            scanf("%ld",&digit);
            if(digit==4)
                t4++;
            if(digit==3)
                t3++;
            if(digit==2)
                t2++;
            if(digit==1)
                t1++;
        }
        long int res = 0;
        res=t4;

        if(t3<=t1)
        {
            res=res+t3;
            t1=t1-t3;
        }
        else if (t3>t1)
        {
            res=res+t3;
            t1=0;
        }
        if(t2%2==0)
        {
            res=res+t2/2;
            if(t1%4==0)
                res=res+t1/4;
            else
                res=res+t1/4+1;
        }
        else if(t2%2==1)
        {
            t1=(2*t2)+t1;

            if(t1%4==0)
                res=res+t1/4;
            else
                res=res+t1/4+1;
        }
        cout<<res;
    }
    return 0;
}
