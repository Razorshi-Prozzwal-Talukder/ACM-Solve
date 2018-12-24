#include<bits/stdc++.h>
using namespace std;
char as[1000][1000];
main()
{
    int n;
    while(cin>>n)
    {
        int i, j, k, ans=0;

        for(i=0; i<n; i++)
            for(j=0; j<n; j++)cin>>as[i][j];

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                for(k=j+1; k<n; k++)
                {
                    if(as[i][j]=='C' && as[i][k]=='C')ans++;
                    if(as[j][i]=='C' && as[k][i]=='C')ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
