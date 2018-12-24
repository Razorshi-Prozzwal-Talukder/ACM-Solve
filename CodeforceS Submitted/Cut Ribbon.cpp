#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, a, b, c;
    while(cin>>n>>a>>b>>c)
    {
        int i, j, k, ans=0;
        for(i=0; ; i++)
        {
            if(i*a>n)break;
            for(j=0; ; j++)
            {
                if((a*i+b*j)>n)break;
                if((n-(a*i+b*j))%c==0)
                {
                    k = (n-(a*i+b*j))/c;
                    ans = max(ans, i+k+j);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
