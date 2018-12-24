#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n+1][n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
            if(i==j || (i+j==n+1))
            {
                if(a[i][j]!=a[1][1])
                {
                    cout<<"NO";
                    return 0;
                }
            }
            else if(a[i][j]!=a[1][2] || a[i][j]==a[1][1])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}
