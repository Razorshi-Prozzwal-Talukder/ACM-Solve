#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, k;
    while(cin>>n>>k)
    {
        int sum = 240-k, i;
        for(i=1; i<=n; i++)
        {
            if((i*5)<=sum)
                sum = sum-(i*5);
            else
                break;
        }
        cout<<i-1<<endl;
    }
    return 0;
}
