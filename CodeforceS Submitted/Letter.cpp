#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, m;
    while(cin>>n>>m)
    {
        char sd[1000][1000];
        int i, j, low=m, high=0, row, st=0, g=0, h=0, end1;
        for(i=0; i<n; i++)
        {

            for(j=0; j<m; j++)
            {
                cin>>sd[i][j];
                if(sd[i][j]=='*' && g==0)
                {
                    row=i;
                    g++;
                }
                if(sd[i][j]=='*')h++;
                if(sd[i][j]=='*')
                    if(j<low)low=j;
                if(sd[i][j]=='*')
                    if(j>high)high=j;
            }
            if(h>0)
            {
                end1=i;
                h=0;
            }
        }

        for(i=row; i<=end1; i++)
        {
            for(j=low; j<=high; j++)
                cout<<sd[i][j];

            cout<<endl;
        }
    }
    return 0;
}
