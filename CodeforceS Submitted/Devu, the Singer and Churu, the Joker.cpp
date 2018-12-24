#include<bits/stdc++.h>
using namespace std;
int as[1000000];
main()
{
    int n, d;
    while(cin>>n>>d)
    {
        int i, ans, s, sum=0, k;
        for(i=1; i<=n; i++)
        {
            cin>>s;
            sum+=s;
        }
        d = d-sum;
        ans = 10 * (n-1);
        if(d<ans)printf("-1\n");
        else
        {
            k = (n-1)*2;
            d = d-ans;
            while(d!=0 && d>=5)
            {
                k++;
            d-=5;
            }
            cout<<k<<endl;
        }
    }
    return 0;
}
