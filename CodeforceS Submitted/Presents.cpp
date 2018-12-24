#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, ar[200];
        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
        }
        for(int j=1; j<=n; j++)
        {
            for(i=1; i<=n; i++)
            {
                if(ar[i]==j)
                    cout<<i;
            }
            if(j==n)break;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
