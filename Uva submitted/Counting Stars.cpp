#include <bits/stdc++.h>
using namespace std;
char s[102][102];
int count1, count2, row, colom;
int chk(int i, int j)
{
    s[i][j] = 'V';
    int x=i, y=j;
    count1++;
    if(x-1>=0)
    {
        if(s[x-1][y] == 'N')
            chk(x-1, y);
        if(y-1>=0 && s[x-1][y-1] == 'N')
            chk(x-1, y-1);
        if(y+1<colom && s[x-1][y+1] == 'N')
            chk(x-1, y+1);
    }
    if(x+1<row)
    {
        if(s[x+1][y] == 'N')
            chk(x+1, y);
        if(y+1<colom && s[x+1][y+1] == 'N')
            chk(x+1, y+1);
        if(y-1>=0 && s[x+1][y-1] == 'N')
            chk(x+1, y-1);
    }
    if(y+1<colom && s[x][y+1] == 'N')
        chk(x, y+1);
    if(y-1>=0 && s[x][y-1] == 'N')
        chk(x, y-1);
}
int main()
{
    int i,j,k,l;
    char E, N, V;
    while(cin>>row>>colom)
    {
        if(row==0&&colom==0) break;
        getchar();
        for(i=0; i<row; i++)
        {
            for(j=0; j<colom; j++)
                cin>>s[i][j];

            getchar();
        }
        for(i=0; i<row; i++)
        {
            for(j=0; j<colom; j++)
            {
                if(s[i][j]=='.')
                    s[i][j]='E';
                else if(s[i][j]=='*')
                    s[i][j]='N';
            }
        }
        count1=0, count2=0;
        for(i=0; i<row; i++)
        {
            for(j=0; j<colom; j++)
            {
                if(s[i][j]=='N')
                {
                    chk(i, j);
                    if(count1==1)
                       count2++;

                    count1=0;
                }
            }
        }
        cout<<count2<<endl;
    }
    return 0;
}
