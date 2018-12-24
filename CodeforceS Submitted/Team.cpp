#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, array[1000];
    while(scanf("%d",&n)==1)
    {
        int i, j, k=0, count=0 ;
        for(i=1; i<=n; i++)
        {
           for(j=0; j<3; j++)
           {
               scanf("%d",&array[j]);
           }
           for(j=0; j<3; j++)
           {
               if(array[j]==1)
                k++;
           }
           if(k>=2)
            count++;
           k=0;
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}

