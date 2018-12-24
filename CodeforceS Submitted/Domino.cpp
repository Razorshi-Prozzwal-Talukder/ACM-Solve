#include<bits/stdc++.h>
using namespace std;
int up[1000], low[1000], up1[1000], low1[1000];
main()
{
    int n;
    while(cin>>n)
    {
        int i, u, l, temp;
        for(i=1; i<=n; i++)
        {
            cin>>u>>l;
            up[i] = u;
            low[i] = l;
        }
        int sum1=0, sum2=0, ct=-1, j=1, ct1=0;
        for(i=1; i<=n; i++)
        {
            sum1 = sum1 + up[i];
            sum2 = sum2 + low[i];
        }

        if(sum1%2==0 && sum2%2==0)ct=0;
        else if(sum1%2!=0 && sum2%2!=0)
        {
            temp=0;
            for(i=1; i<=n; i++)
            {
                if((up[i]%2==0 && low[i]%2!=0) || (up[i]%2!=0 && low[i]%2==0))
                {
                    temp=1;
                    break;
                }
            }
            if(temp==1)ct=1;
        }
            cout<<ct<<endl;
    }
    return 0;
}
