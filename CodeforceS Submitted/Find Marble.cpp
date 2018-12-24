#include<bits/stdc++.h>
using namespace std;
int as[100000], bs[100000];
main()
{
    int n, s, t;
    while(cin>>n>>s>>t)
    {
        int i, path=0, prblm=0;
        for(i=1; i<=n; i++)cin>>as[i];
        bs[s] = 1;
        while(1)
        {
            if(s==t)
            {
                cout<<path<<endl;
                break;
            }
            s = as[s];
            if(bs[s]){prblm=1;
             break;}
            bs[s]=1, path++;
        }
        if(prblm==1)printf("-1\n");
    }
    return 0;
}
