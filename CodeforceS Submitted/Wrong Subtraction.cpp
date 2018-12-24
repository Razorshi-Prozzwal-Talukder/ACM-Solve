#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, k;
    while(cin>>n>>k)
    {
        int i, res=n;
        for(i=1; i<=k; i++)
        {
            if(res%10==0)res/=10;
            else
                res-=1;
        }
        cout<<res<<endl;
    }
    return 0;
}
