#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, as[10000], sum=0, tot, j;
        for(i=1; i<=n; i++)
        {
            cin>>as[i];
            sum = sum + as[i];
        }
        tot = sum/(n/2);
        for(i=1; i<n; i++)
        {
            if(as[i]==0)continue;
            for(j=i+1; j<=n; j++)
            {
                if(as[j]==0)continue;
                else if(as[i]+as[j]==tot)
                {
                    cout<<i<<" "<<j<<endl;
                    as[j]=0;
                    break;
                }
            }
        }
    }
    return 0;
}
