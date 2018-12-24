#include<bits/stdc++.h>
using namespace std;
main()
{
    int ar[1000], ar2[1000];
    int n;
    while(cin>>n)
    {
        for(int x=0; x<n; x++)
            cin>>ar[x];

        int i, j, k, low, high, ans=0, cnt1=0, gth=0, p=0, cnt2=0, temp, x=n-1, y=0;

        for(i=0; i<n; i++)
            ar2[i] = ar[i];

        sort(ar2, ar2+n);

        low = ar2[0];
        high = ar2[n-1];

        while(ar[x]!= low)
            x--;

        for(k=x; k<n-1; k++)
        {
            cnt1++;
            temp = ar[k];
            ar[k] = ar[k+1];
            ar[k+1] = temp;
        }

        while(ar[y]!= high)
            y++;

        for(k=y; k>0; k--)
        {
                cnt2++;
                temp = ar[k];
                ar[k] = ar[k-1];
                ar[k-1] = temp;
        }

        ans = cnt1 + cnt2;
        cout<<ans<<endl;
    }
    return 0;
}
