#include<bits/stdc++.h>
using namespace std;
int big_mod(int n, int p, int m)
{
    int ans =1;
    while(p>0)
    {
        if(p%2==1)
            ans = (ans*n)%m;
        p=p/2;
        n = (n*n)%m;
    }
    return ans;
}
main()
{
    int n, p, m;
    while(cin>>n>>p>>m)
    {
        int ans;
        ans = big_mod(n, p, m);
        cout<<ans<<endl;
    }
}
