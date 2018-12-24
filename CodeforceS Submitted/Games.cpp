#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, j, k, a[100], b[100], x, y, ans=0;
        for(k=0; k<n; k++)
        {
            cin>>x>>y;
            a[k] = x;
            b[k] = y;
        }
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i!=j && a[i]==b[j])ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
