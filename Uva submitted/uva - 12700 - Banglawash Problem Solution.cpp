#include<bits/stdc++.h>
using namespace std;
main()
{
    int test, i, j, n, b=0, t=0, a=0, w=0;
    char ch;
    scanf("%d",&test);
    for(j=1; j<=test; j++)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            cin>>ch;
            if(ch=='B')
                b++;
            else if(ch=='T')
                t++;
            else if(ch=='A')
                a++;
            else if(ch=='W')
                w++;
        }
        if(b==n || (b+a)==n && n!=a)
            printf("Case %d: BANGLAWASH\n",j);
        else if(w==n || (w+a)==n && n!=a)
            printf("Case %d: WHITEWASH\n",j);
        else if(b==w && n!=a)
            printf("Case %d: DRAW %d %d\n",j,w,t);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d\n",j,b,w);
        else if(b<w)
            printf("Case %d: WWW %d - %d\n",j,w,b);
        else if(a==n)
            printf("Case %d: ABANDONED\n",j);
        b=0,t=0,a=0,w=0;
    }

    return 0;
}
