#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, p, q, count=0;
        for(i=1; i<=n; i++)
        {
            cin>>p>>q;
            if(q-p>=2)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
