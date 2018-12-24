#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, a, b, p=0;
        for(i=1; i<=n; i++)
        {
            cin>>a>>b;
            if(a!=b)p=1;
        }
        if(p==1) printf("Happy Alex\n");
        else
            printf("Poor Alex\n");
    }
    return 0;
}
