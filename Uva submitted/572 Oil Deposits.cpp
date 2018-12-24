#include<bits/stdc++.h>
using namespace std;
 char str[1000][1000];
 int m, n;
void dfs(int x, int y)
{
    if(x<0 || y<0 || x==m || y==n)return;
    if(str[x][y]!='@')return;
    if(str[x][y]=='@')str[x][y]='*';
    dfs(x, y+1);
    dfs(x, y-1);
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x+1, y+1);
    dfs(x+1, y-1);
    dfs(x-1, y+1);
    dfs(x-1, y-1);
}
main()
{
    while(cin>>m>>n)
    {
        int i, j, total=0;
        if(m==0)break;

        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                cin>>str[i][j];


        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                if(str[i][j]!='*')
                {
                    dfs(i, j);
                    total++;
                }
            }
            cout<<total<<endl;
    }
    return 0;
}
