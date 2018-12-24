#include<bits/stdc++.h>
using namespace std;
int a[123456], b[123456];
main()
{
    int n, m, i, j;
    cin>>n;
    for(i=0; i<n; i++) cin>>a[i];
    cin>>m;
    for(j=0; j<m; j++)cin>>b[j];
    sort(a, a+n);
    sort(b, b+m);
    int count1=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if((abs(a[i]-b[j])==0)||(abs(a[i]-b[j])==1))
            {
                b[j] = 1000;
                count1++;
                break;
            }
        }
    }
    cout<<count1<<endl;
}
