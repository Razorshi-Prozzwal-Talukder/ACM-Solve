#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, k;
    while(cin>>n>>k)
    {
        int i, a[5000], cou=0, num, save[5000];

        for(i=1; i<=100; i++)a[i]=0;

        for (i=1; i<=n; i++)
        {
            cin>>num;
            if(a[num]==0)
            {
                a[num]=num;
                cou++;
                save[i]=num;
            }
            else
                save[i]=0;
        }

        if(cou>=k)
        {
            cou=0;
            cout<<"YES"<<endl;
            for(i=1; i<=n; i++)
            {
                if(save[i]!=0)
                {
                    cou++;
                    printf("%d ",i);
                }
                if(cou==k)break;
            }
        }
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
