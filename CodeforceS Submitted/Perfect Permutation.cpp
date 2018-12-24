#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, as[5000];
        if(n%2!=0)printf("-1\n");
        else
        {
            for(i=1; i<=n; i++)as[i] = i;
            int k=1, temp;
            while(2*k<=n)
            {
                temp = as[2*k-1];
                as[2*k-1] = as[2*k];
                as[2*k] = temp;
                k++;
            }
             for(i=1; i<=n; i++)printf("%d ", as[i]);
              printf("\n");
        }
    }
    return 0;
}
