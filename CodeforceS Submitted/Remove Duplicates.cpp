#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, a[5000];
    while(cin>>n)
    {
        int i, res=0, p[5000], s[5000], j=0;

        for(i=0; i<=5000; i++)s[i]=1;

         //for(i=0; i<=50; i++)printf("%d ",s[i]);

        for(i=0; i<n; i++)cin>>a[i];

        for(i=n-1; i>=0; i--)
        {
            if(s[a[i]]==1){
                p[j]=a[i];
                s[a[i]]=0;
                j++;
            }
        }

        //for(i=0; i<j; i++)printf("%d ",p[i]);
        //cout<<endl;

        cout<<j<<endl;
        for(i=j-1; i>=0; i--)printf("%d ",p[i]);
        printf("\n");
    }
    return 0;
}
