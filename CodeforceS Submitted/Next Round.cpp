#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, k, arry[110];
    while(scanf("%d %d",&n, &k)==2)
    {
        if(1>k && n<k && n>50)
            break;

        int i, t=0, j;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arry[i]);
        }
        //sort(arry, arry+i);
        //cout<<arry<<endl;
        for(i=0; i<n; i++)
        {
            if(arry[i]<=0)
                break;
            else
            {
                if(arry[i]>=arry[k-1])
                t++;
            }
        }
        cout<<t<<endl;
    }
    return 0;
}
