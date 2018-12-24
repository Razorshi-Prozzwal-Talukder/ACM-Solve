#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, m;
    while(cin>>n>>m)
    {
        int i, tk=0, as[100000];
        for(i=0; i<n ;i++)cin>>as[i];
        sort(as, as+n);
        for(i=0; i<m; i++)
            if(as[i]<0)tk+=abs(as[i]);
        cout<<tk<<endl;
    }
    return 0;
}
