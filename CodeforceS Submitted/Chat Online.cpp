#include<bits/stdc++.h>
using namespace std;
int a[100000], b[100000], c[100000], d[100000];
main()
{
    int p, q, l, r;
    while(cin>>p>>q>>l>>r)
    {
        int i, t, po, x, y, j, ans=0;

        for(i=0; i<p; i++)cin>>a[i]>>b[i];
        for(i=0; i<q; i++)cin>>c[i]>>d[i];

        for(t=l; t<=r; t++)
        {
            po=1;
            for(i=0; i<q; i++)
            {
                x = c[i]+t;
                y = d[i]+t;
                for(j=0; j<p; j++)
                {
                    if((x>=a[j]&&y<=b[j])||(x<=a[j]&&y>=b[j])||(x<=a[j]&&y>=a[j])||(x<=b[j]&&y>=b[j]))
                    {
                        ans++;
                        po=0;
                        break;
                    }
                }
                if(po==0)break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
