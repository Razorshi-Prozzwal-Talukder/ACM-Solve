#include<bits/stdc++.h>
using namespace std;
int as[1000000], save[1000000];
main()
{
    int n;
    while(cin>>n)
    {
        int i, p=0, dis;
        for(i=1; i<=n; i++)
        {
            cin>>as[i];
            if(i!=1 && as[i]<as[i-1])
            {
                p++;
                dis = i;
            }
        }
       // cout<<p<<endl;
        if(p==0)printf("0\n");
        else
        {
            if(p==1 && as[1]>=as[n])printf("%d\n", (n-dis)+1);
            else
                printf("-1\n");
        }
    }
    return 0;
}
