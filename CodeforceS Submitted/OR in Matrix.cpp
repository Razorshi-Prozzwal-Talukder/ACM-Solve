#include<bits/stdc++.h>
using namespace std;
int a[1000][1000], b[1000][1000];
main()
{
    int r, c;
    while(cin>>r>>c)
    {
        int i,j,k;
        bool check;

        for(i=1; i<=r; i++)
            for(j=1; j<=c; j++)
                cin>>b[i][j];

        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                if(b[i][j]==0)
                {
                    for(k=1; k<=c; k++) a[i][k]=-1;

                    for(k=1; k<=r; k++) a[k][j]=-1;
                }
            }
        }

        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                if(b[i][j]==1)
                {
                    check = false;
                    for(k=1; k<=c; k++)
                        if(a[i][k]!=-1) check=true;


                    for(k=1; k<=r; k++)
                        if(a[k][j]!=-1) check=true;

                    if(check==false)
                    {
                        cout<<"NO\n";
                        return 0;
                    }
                }
            }
        }
        cout<<"YES\n";
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                if(a[i][j]==-1)
                    cout<<0;
                else
                    cout<<1;
                cout<<" ";
            }
            printf("\n");
        }
    }
    return 0;
}
