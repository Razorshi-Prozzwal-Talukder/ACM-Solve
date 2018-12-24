#include<bits/stdc++.h>
using namespace std;
main()
{

    char as[100][100];
    int i, j, x, o;
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
            cin>>as[i][j];
    }

    ///right
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=6; j++)
        {
            x=0, o=0;
            if(as[i][j]=='X')x++;
            if(as[i][j+1]=='X')x++;
            if(as[i][j+2]=='X')x++;
            if(as[i][j+3]=='X')x++;
            if(as[i][j+4]=='X')x++;

            if(as[i][j]=='O')o++;
            if(as[i][j+1]=='O')o++;
            if(as[i][j+2]=='O')o++;
            if(as[i][j+3]=='O')o++;
            if(as[i][j+4]=='O')o++;

            if(x>=4 && o==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else
                x=0, o=0;
        }
    }

    ///down
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=6; j++)
        {
            x=0, o=0;
            if(as[j][i]=='X')x++;
            if(as[j+1][i]=='X')x++;
            if(as[j+2][i]=='X')x++;
            if(as[j+3][i]=='X')x++;
            if(as[j+4][i]=='X')x++;

            if(as[j][i]=='O')   o++;
            if(as[j+1][i]=='O') o++;
            if(as[j+2][i]=='O') o++;
            if(as[j+3][i]=='O') o++;
            if(as[j+4][i]=='O') o++;

            if(x>=4 && o==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else
                x=0, o=0;
        }
    }

    ///diagonali_up_ right
    for(i=5; i<=10; i++)
    {
        for(j=1; j<=6; j++)
        {
            x=0, o=0;
            if(as[i][j]=='X')x++;
            if(as[i-1][j+1]=='X')x++;
            if(as[i-2][j+2]=='X')x++;
            if(as[i-3][j+3]=='X')x++;
            if(as[i-4][j+4]=='X')x++;

            if(as[i][j]=='O')o++;
            if(as[i-1][j+1]=='O')o++;
            if(as[i-2][j+2]=='O')o++;
            if(as[i-3][j+3]=='O')o++;
            if(as[i-4][j+4]=='O')o++;

            if(x>=4 && o==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else
                x=0, o=0;
        }
    }

    ///diagonali_up_ left
    for(i=5; i<=10; i++)
    {
        for(j=10; j>=5; j--)
        {
            x=0, o=0;
            if(as[i][j]=='X')x++;
            if(as[i-1][j-1]=='X')x++;
            if(as[i-2][j-2]=='X')x++;
            if(as[i-3][j-3]=='X')x++;
            if(as[i-4][j-4]=='X')x++;

            if(as[i][j]=='O')o++;
            if(as[i-1][j-1]=='O')o++;
            if(as[i-2][j-2]=='O')o++;
            if(as[i-3][j-3]=='O')o++;
            if(as[i-4][j-4]=='O')o++;

            if(x>=4 && o==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else
                x=0, o=0;
        }
    }
    cout<<"NO"<<endl;
    as[1][1]='\0';
    return 0;

}
