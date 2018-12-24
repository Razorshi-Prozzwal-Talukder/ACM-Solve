#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, m;
    while(cin>>n>>m)
    {
        int i, j, k, l, p=1;
        for(i=1; i<=n; i++)
        {
            if(i%2!=0)
            {
                for(j=1; j<=m; j++)
                    printf("#");
                printf("\n");
            }
            else if(i%2==0)
            {
                if(p==1)
                {
                    for(j=1; j<=m; j++)
                    {
                        if(j!=m)printf(".");
                        else if(j==m)printf("#");
                    }
                    printf("\n");
                    p=0;
                }
                else if(p==0)
                {
                    for(j=1; j<=m; j++)
                    {
                        if(j!=1)printf(".");
                        else if(j==1)printf("#");
                    }
                    printf("\n");
                    p=1;
                }
            }
        }
    }
    return 0;
}
