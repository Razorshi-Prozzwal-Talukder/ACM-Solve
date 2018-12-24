#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, k;
    while(cin>>n>>k)
    {
        int i, a[10000], sum=0, total=0, ok=0, save;
        for(i=1; i<=n; i++)cin>>a[i];

        for(i=1; i<=n; i++)
        {
            total = total + a[i];
            if(total > 8)
            {
                save = abs(total-8);
                sum = sum + 8;
                if(sum>=k)ok=1;
                total = save;
            }
            else
            {
                sum=sum+total;
                if(sum>=k)ok=1;
                total=0;
            }
           // cout<<sum<<total<<endl;
            if(ok==1)break;

        }
         if(ok==1)
        cout<<i<<endl;
        else
            cout<<-1<<endl;
    }
}
