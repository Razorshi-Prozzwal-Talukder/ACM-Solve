#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int x, y, b, p, q, a[1000], got=0;
        for(x=1; x<=n; x++)
            a[x]=-2;
        cin>>p;
        for( y=1; y<=p; y++)
        {
            cin>>b;
            for(x=1; x<=n; x++)
            {
                if(x==b)
                {
                    a[x]=-1;
                    break;
                }
            }
        }
        cin>>q;
        for( y=1; y<=q; y++)
        {
            cin>>b;
            for(x=1; x<=n; x++)
            {
                if(x==b)
                {
                    a[x]=-1;
                    break;
                }
            }
        }
        for(x=1; x<=n; x++)
        {
            if(a[x]==-2)
                got++;
        }
        if(got>0)cout<<"Oh, my keyboard!"<<endl;
        else
            cout<<"I become the guy."<<endl;
    }
    return 0;
}
