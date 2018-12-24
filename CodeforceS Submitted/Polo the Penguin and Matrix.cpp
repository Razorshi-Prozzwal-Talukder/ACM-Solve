#include<bits/stdc++.h>
using namespace std;
int as[100001];
main()
{
    int n, m, d;
    while(cin>>n>>m>>d)
    {
        int  t, j, ans = INT_MAX, flag=1, i;
        for(i=0; i<n*m; i++)cin>>as[i];
        t = as[0]%d;
        for(i=0; i<m*n; i++)
        {
            if(as[i]%d!=t)
            {
                flag=0;
                break;
            }
        }
        if(flag==0){printf("-1\n"); return 0;}
        else
        {
            for(i=0; i<m*n; i++)
            {
                int moves=0;
                for(j=0; j<m*n; j++)
                {
                    if(i!=j)
                        moves = moves + (abs(as[i]-as[j]))/d ;
                }
                ans=min(ans, moves);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
