#include<bits/stdc++.h>
using namespace std;
int as[10000], sa[10000];
main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;

        for(int h=1; h<n; h++)sa[h]=2;
        int  i, def, ok=0, sum=0;
        for(i=1; i<=n; i++) cin>>as[i];
        for(i=2; i<=n; i++)
        {
            def=abs(as[i]-as[i-1]);
            if(def<n)
            {
                ok=1;
                sa[def]=0;
            }
            else
                ok=0;
        }
        if(n==1) printf("Jolly\n");
        else{
        if(ok==0)printf("Not jolly\n");
        else
        {
            for(i=1; i<n; i++)sum=sum+sa[i];
            if(sum>0)printf("Not jolly\n");
            else
                printf("Jolly\n");
        }
        }
    }
    return 0;
}
