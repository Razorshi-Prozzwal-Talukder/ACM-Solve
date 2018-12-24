#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, h;
    while(cin>>n>>h)
    {
        int i, a, sum=0;
        for(i=1; i<=n; i++)
        {
            cin>>a;
            if(a>h)sum+=2;
            else
                sum+=1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
