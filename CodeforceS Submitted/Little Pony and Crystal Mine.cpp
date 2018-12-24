#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
     char as[1000][1000];
    while(cin>>n)
    {
        int i, j, f, e;

        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                as[i][j]='D';

        i=(n/2);
        f=1, e=n;
        while(i>=1)
        {
            for(j=1; j<=f; j++)as[i][j]='*';
            for(j=n; j>=e; j--)as[i][j]='*';

            f++, e--, i--;
        }

        i=(n/2)+2;
        f=1, e=n;
        while(i<=n)
        {
            for(j=1; j<=f; j++)as[i][j]='*';
            for(j=n; j>=e; j--)as[i][j]='*';

            f++, e--, i++;
        }

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                cout<<as[i][j];
            printf("\n");
        }
    }
    return 0;
}
