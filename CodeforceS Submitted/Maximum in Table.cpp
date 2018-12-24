#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int as[n][n], i, j;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(i==1)as[i][j]=1;
                else if(i>1 && j==1)as[i][j]=1;
                else
                    as[i][j]=as[i-1][j]+as[i][j-1];

            }
        }
        cout<<as[n][n]<<endl;
    }
    return 0;
}
