#include<bits/stdc++.h>
using namespace std;
int a[100000], a2[100000];
main()
{
    int n;
    while(cin>>n)
    {
        int i, mxd=0, df, t=0, j;
        for(i=1; i<=n; i++) cin>>a[i];

        for(i=2; i<n; i++)
        {
           for(j=2; j<=n; j++)
           {
               if(j==i)continue;
               else if(j==i+1)df=a[j]-a[j-2];
               else
                df=a[j]-a[j-1];
               if(mxd<df)mxd=df;
           }
           a2[t++]=mxd;
           mxd=0;
        }
        sort(a2, a2+t);
        cout<<a2[0]<<endl;
    }
    return 0;
}
