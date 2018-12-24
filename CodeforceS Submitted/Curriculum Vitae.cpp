#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, a, z=0, o=0;
        for(i=1; i<=n; i++)
        {
            cin>>a;
            if(a) o = 1+max(z, o);
            else
                z++;
        }
        cout<<max(z, o)<<endl;
    }
    return 0;
}
