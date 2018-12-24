#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, ar[100000];
    while(cin>>n)
    {
        int i, best, worst, res=0;
        for(i=0; i<n; i++)
            cin>>ar[i];
        best=worst=ar[0];
        for(i=1; i<n; i++)
        {
            if(ar[i]>best)
            {
                best=ar[i];
                res++;
            }
            else if(ar[i]<worst)
            {
                worst=ar[i];
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
