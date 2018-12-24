#include<bits/stdc++.h>
using namespace std;
main()
{
    int r, c;
    while(cin>>r>>c)
    {
        char as[100][100];
        int i, j, g, co=0, co2=0;
        getchar();

        for(i=0; i<r; i++)
            for(j=0; j<c; j++)
                cin>>as[i][j];

        for(i=0; i<r; i++)
        {
            g=1;
            for(j=0; j<c; j++)
                if(as[i][j]=='S')g=2;

            if(g==2)
            {
                for(j=0; j<c; j++)
                    if(as[i][j]=='.')as[i][j]='n';
            }
            if(g==1)
            {
                for(j=0; j<c; j++)
                    if(as[i][j]=='.')as[i][j]='y';
            }
        }
        for(j=0; j<c; j++)
        {
            g=1;
            for(i=0; i<r; i++)
                if(as[i][j]=='S')g=2;

            if(g==1)
            {
                for(i=0; i<r; i++)
                    if(as[i][j]=='n')as[i][j]='y';
            }
        }

        for(i=0; i<r; i++)
            for(j=0; j<c; j++)
                if(as[i][j]=='y')co++;

        cout<<co<<endl;
    }
    return 0;
}
