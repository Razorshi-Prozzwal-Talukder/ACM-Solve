#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int a[n], match=0, i, sum=0;
        for(i=0; i<n; i++)cin>>a[i];
        for(i=0; i<n; i++)if(a[i]==a[i+1])match++;
        if(n==1 || (match==n-1 && n==2) )cout<<-1<<endl;
        else
        {
            for(i=1; i<n; i++)sum+=a[i];
            if(a[0]!=sum)printf("1\n1");
            else
                printf("1\n2");
        }

    }
    return 0;
}
