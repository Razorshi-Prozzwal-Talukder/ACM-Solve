#include<bits/stdc++.h>
using namespace std;
main()
{
    int T,x,y,z,i,ans;
    while(scanf("%d",&T)==1)
    {
        for(i=1; i<=T; i++)
        {
            scanf("%d %d %d",&x,&y,&z);
            ans=(z*(x+(x-y)))/(x+y);
            if(ans<=0)
                cout<<"0"<<endl;
            else
                cout<<ans<<endl;

        }
    }
    return 0;
}
