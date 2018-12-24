#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    char st[5000],a;
    while(cin>>n)
    {
        int i,one=0, zero=0;
        for(i=1; i<=n; i++)
        {
            cin>>a;
            if(a=='1')one++;
            else
                zero++;
        }
        if(one>0)cout<<"1";
        if(zero>0)
            for(i=1; i<=zero;i++)cout<<"0";

            printf("\n");
    }
    return 0;
}
