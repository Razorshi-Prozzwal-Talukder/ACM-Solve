#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll as[1000][1000],  row[5000], colm[5000];
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, j, x, y, k, l;

        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)cin>>as[i][j];

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(as[i][j]!=1)
                {
                    ll ok=0;

                    ///fill row - colom
                    x=i, k=1;
                    for(y=1; y<=n; y++)
                        if(y!=j)row[k++]=as[x][y];

                    y=j, l=1;
                    for(x=1; x<=n; x++)
                        if(x!=i)colm[l++]=as[x][y];

                    ///fill cmplt ok

                    for(x=1; x<k; x++)
                    {
                        for(y=1; y<l; y++)
                        {
                            if(row[x] + colm[y]==as[i][j])
                            {
                                ok=1;
                                break;
                            }
                        }
                    }
                    if(ok==0)
                    {
                       cout<<"No";
                       return 0;
                    }
                }
            }
        }
        cout<<"Yes"<<endl;
    }
    return 0;
}
