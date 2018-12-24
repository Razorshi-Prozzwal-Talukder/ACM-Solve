#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int a[500], s[500], i, j, x, y, t=1, p=1, cnt=0;
        for(i=1; i<=n; i++)
        {
           cin>>x>>y;
           a[t++]=x;
           s[p++]=y;
        }
        for(i=1; i<=n; i++)
        {
            int up=0, down=0, left=0, right=0;
            for(j=1; j<=n; j++)
            {
                if(j!=i)
                {
                    if(a[j]==a[i])
                    {
                        if(s[j]>s[i])up=1;
                        else if(s[j]<s[i])down=1;
                    }
                    if(s[j]==s[i])
                    {
                        if(a[j]>a[i])right=1;
                        else if(a[j]<a[i])left=1;
                    }
                }
            }
            if(right==1 && left==1 && up==1 && down==1)cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
