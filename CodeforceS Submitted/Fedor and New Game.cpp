#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ary[1000000], put[1000000];
char mains[100000], op[100000], keep[100000], temp;
main()
{
    ll n, m, k;
    while(cin>>n>>m>>k)
    {
        ll i, j, fincnt=0, x=0;
        for(i=0; i<=m; i++)cin>>ary[i];

        /*for(i=0; i<=m; i++)printf("%d ", ary[i]);
        cout<<endl;*/

        ll p=1, q=0;
        while(ary[m]!=0)///making mains binary
        {
            put[p++] = ary[m] % 2;
            ary[m] = ary[m] / 2;
        }
        for(j=p-1; j> 0; j--)///using string
        {
            mains[q] = put[j]+'0';
            q++;
        }
        mains[q] = '\0';

        /*puts(mains);
        cout<<endl;*/

        while(x<m)
        {
            ll a=1, cnt=0, b=0;
            while(ary[x]!=0)///making mains binary
            {
                put[a++] = ary[x] % 2;
                ary[x] = ary[x] / 2;
            }
            for(j=a-1; j>0; j--)
            {
                op[b] = put[j]+'0';
                b++;
            }
            op[b] = '\0';
            if(strlen(mains)==strlen(op))
            {
                for(i=0; i<strlen(mains); i++)
                    if(mains[i]!=op[i])cnt++;

                if(cnt<=k)fincnt++;

                /*puts(op);
                cout<<endl;*/
            }
            else if(strlen(mains)!=strlen(op))
            {
                if(strlen(mains)>strlen(op))
                {
                    for(i=strlen(mains)-1, j=strlen(op)-1; i>=0; i--, j--)
                    {
                        if(j>=0)keep[i] = op[j];
                        else
                            keep[i] = '0';
                    }
                    for(i=0; i<strlen(mains); i++)
                        if(mains[i]!=keep[i])cnt++;

                    if(cnt<=k)fincnt++;
                }
                else if(strlen(mains)<strlen(op))
                {
                    for(i=strlen(op)-1, j=strlen(mains)-1; i>=0; i--, j--)
                    {
                        if(j>=0)keep[i] = mains[j];
                        else
                            keep[i] = '0';
                    }
                    for(i=0; i<strlen(op); i++)
                        if(op[i]!=keep[i])cnt++;

                    if(cnt<=k)fincnt++;

                }
            }
            x++;
        }
        cout<<fincnt<<endl;
    }
    return 0;
}
