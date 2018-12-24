#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, m;
    char str[1000], ch;

    int ar[1000];
    while(scanf("%d %d",&n, &m)==2)
    {
        int i, j, k, a, b, got=0, x;

        for(i=1; i<=m; i++)
            ar[i]=-2;


        for(j=1; j<=n; j++)
        {
            cin>>a;
            for(k=1; k<=a; k++)
            {
                cin>>b;
                ar[b]=-1;
            }
        }
        for(x=1; x<=m; x++)
        {
            if(ar[x]==-2)
                got++;
        }
        if(got>0)cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;
}
