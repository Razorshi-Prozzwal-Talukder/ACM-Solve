#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, as[100000];
    while(cin>>n)
    {

        int i, p=1;
        if(n==4)
        {
            printf("4\n3 1 4 2\n");
            return 0;
        }
        for(i=1; i<=n; i++)
            if(i%2==1)as[p++]=i;

        for(i=1; i<=n; i++)
            if(i%2==0)
            {
                if(as[p-1]==i+1||as[p-1]==i-1)continue;
                else
                    as[p++]=i;
            }
            cout<<p-1<<endl;
            for(i=1; i<=p-1; i++)
                cout<<as[i]<<" ";

            printf("\n");
    }
    return 0;
}
