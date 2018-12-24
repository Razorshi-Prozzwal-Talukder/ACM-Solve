#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int a[50000], i, same=0, j, poc=1;
        for(i=0; i<n; i++)cin>>a[i];
        sort(a, a+n);
        for(i=1; i<n; i++)
        {
            if(a[i]==a[i-1])
            {
                j=i;
                i=i-1;
                for(j; j<n; j++)
                {
                    if(a[j]==a[i])same++;
                    else
                    {
                        same++;
                        if(poc<same)poc=same;
                        same=0;
                        i=j;
                        break;
                    }
                }
                if(j==n)
                {
                    same++;
                    if(poc<same)poc=same;
                    break;
                }
            }
        }
        cout<<poc<<endl;
    }
    return 0;
}
