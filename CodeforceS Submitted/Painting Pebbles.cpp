#include<bits/stdc++.h>
using namespace std;
int a[100000];
main()
{
    int n, k;
    while(cin>>n>>k)
    {
        int i, j, mn=1000000, mx=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }
        if(mx-mn>k)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(i=0; i<n; i++)
            {
                for(j=0; j<a[i]; j++)
                {
                    if(j<mn+1)cout<<1<<" ";
                    else
                        cout<<j-(mn-1)<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
