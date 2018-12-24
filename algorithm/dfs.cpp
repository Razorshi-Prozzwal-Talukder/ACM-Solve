#include<bits/stdc++.h>
using namespace std;
char ch[100][100];
int clr;
void dfs(int k, int l)
{
    if(ch[k][l]=='B')
    {
        clr=1;
        return;
    }
    if(k<1||l<1||k>5||l>5)
        return;
    if(ch[k][l]=='X'||ch[k][l]=='V')
        return;

    ch[k][l]='V';

    dfs(k-1, l);
    dfs(k, l-1);
    dfs(k+1, l);
    dfs(k, l+1);
}
main()
{
    int i, j, k, l;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%c", &ch[i][j]);
        }
        getchar();
    }
    scanf("%d %d", &k, &l);
    clr=0;
    dfs(k,l);
    if(clr==1)
        cout<<"Can be Visited"<<endl;
    else
        cout<<"Can not be Visited"<<endl;

    return 0;
}
