#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i=1, total=0, ans=0;
        while(total<=n)
        {
            ans = ans + i;
            total = total + ans;
            if(total>=n)break;
            i++;
        }
        if(total==n)cout<<i<<endl;
        else if(total>n)cout<<i-1<<endl;
    }
    return 0;
}
