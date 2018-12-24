#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, l, a[1010];
    while(cin>>n>>l)
    {
        int i, h;
        double sum, dis,  max_dis=0;
        for(i=0; i<n; i++)cin>>a[i];
        sort(a, a+n);
        for(h=0; h<n; h++){
            if(h>0)
            {
                dis = a[h]-a[h-1];
                if(max_dis<=dis)max_dis = dis;
            }
        }

        sum = max(max_dis/2, max(a[0]-0.00, (double)l-a[n-1]));
        printf("%.10lf\n", sum);
    }
    return 0;
    }
