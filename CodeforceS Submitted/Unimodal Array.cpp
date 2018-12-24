#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, as[100000];
    while(cin>>n)
    {
        int i, ok;
        for(i=1; i<=n; i++)cin>>as[i];
        if(n==1)printf("YES\n");
        else
        {
            i=2;

            while(i<=n)
            {
                if(as[i]>as[i-1])
                {
                    ok=1;
                    i++;
                }
                else if(as[i]<=as[i-1])break;
            }
            while(i<=n)
            {
                if(as[i]==as[i-1])
                {
                    ok=1;
                    i++;
                }
                else if(as[i]<as[i-1])break;
                else if(as[i]>as[i-1])
                {
                    printf("NO\n");
                    return 0;
                }
            }
            while(i<=n)
            {
                if(as[i]<as[i-1])
                {
                    ok=1;
                    i++;
                }
                else
                {
                     printf("NO\n");
                    return 0;
                }
            }

            if(ok==1)printf("YES\n");
        }
    }
    return 0;
}
