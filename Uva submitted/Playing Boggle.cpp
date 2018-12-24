#include<bits/stdc++.h>
using namespace std;
#define white 0
#define gray 1
#define black 2
char board[4][4], word[100];
int color[4][4], level, len;
bool cont;

bool valid(int x, int y)
{
    if(x<0 || x>3 ||y<0 ||y>3)
        return false;
    else
        return true;
}

void ckwrd(int i, int j)
{
    if(cont == false)return;
    level++;
    if(word[level-1]==board[i][j])
    {
        color[i][j] = gray;
        if(level==len)
        {
            cont = false;
            return ;
        }
        if(valid(i-1, j-1))
            if(color[i-1][j-1]==white)ckwrd(i-1, j-1);
        if(valid(i, j-1))
            if(color[i][j-1]==white)ckwrd(i, j-1);
        if(valid(i+1, j-1))
            if(color[i+1][j-1]==white)ckwrd(i+1, j-1);
        if(valid(i+1, j))
            if(color[i+1][j]==white)ckwrd(i+1, j);
        if(valid(i-1, j))
            if(color[i-1][j]==white)ckwrd(i-1, j);
        if(valid(i+1, j+1))
            if(color[i+1][j+1]==white)ckwrd(i+1, j+1);
        if(valid(i, j+1))
            if(color[i][j+1]==white)ckwrd(i, j+1);
        if(valid(i-1, j+1))
            if(color[i-1][j+1]==white)ckwrd(i-1, j+1);

        color[i][j] = black;
    }
    color[i][j] = white;
    level--;
}

void dfs()
{
    cont = true;
    memset(color, 0, sizeof(color));
    level = 0;
    len = strlen(word);
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(cont == false)return;
            if(board[i][j]==word[0])
                ckwrd(i, j);
        }
    }
}

main()
{
    int n, i, a, b, j;
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            //printf("\n");
            getchar();
            for(a=0; a<4; a++)
            {
                for(b=0; b<4; b++)
                    cin>>board[a][b];
                getchar();
            }
            int m, point=0;  ///m = total word & point = count point
            cin>>m;
            for(j=1; j<=m; j++)
            {
                scanf("%s",word);
                dfs();
                if(cont==false)
                {
                    if(len==3 || len==4)
                        point = point + 1;
                    else if(len==5)
                        point = point + 2;
                    else if(len==6)
                        point = point + 3;
                    else if(len==7)
                        point = point + 5;
                    else if(len>7)
                        point = point + 11;
                    else
                        point = point + 0;
                }
            }
            printf("Score for Boggle game #%d: %d\n", i, point);
        }
    }
    return 0;
}
