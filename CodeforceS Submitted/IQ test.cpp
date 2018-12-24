#include<bits/stdc++.h>
using namespace std;
main()
{
    int a[1000], n;
    while(cin>>n)
    {
        int i, odd=0, even=0, indx, indx2;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
                indx=i;
            }
            else
            {
                odd++;
                indx2=i;
            }
        }
        if(even==1)cout<<indx<<endl;
        else
            cout<<indx2<<endl;

    }
    return 0;
}
