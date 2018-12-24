#include<bits/stdc++.h>
using namespace std;
string s[106];
int main()
{
    int m,n;
    while(cin>>n>>m)
    {
        int i,j,k,b=0;

        for (i=0; i<n; i++)
            cin>>s[i];

        for (i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                int good=1;
                for(k=0; k<n; k++)
                {
                    if (s[i][j]<s[k][j]) good=0;
                }
                if (good)
                {
                    b++;
                    break;
                }
            }
        }
        cout<<b<<endl;
    }
    return 0;
}
