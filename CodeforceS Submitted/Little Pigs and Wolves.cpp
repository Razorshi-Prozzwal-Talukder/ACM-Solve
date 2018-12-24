#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];
main()
{
    int n, m;
    while(cin>>n>>m)
    {
        int i, j, ct=0;
        for(i=0; i<n; i++)
            for(j=0; j<m ; j++)cin>>a[i][j];

        for(i=0; i<n; i++)
            for(j=0; j<m ; j++)
            {
                if(a[i][j]=='W')
                {
                    if(a[i][j-1]=='P' || a[i][j+1]=='P' ||a[i-1][j]=='P' || a[i+1][j]=='P')ct++;
                }
            }
            cout<<ct<<endl;
    }
    return 0;
}
