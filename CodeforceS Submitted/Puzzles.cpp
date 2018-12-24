#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, m;
    while(cin>>n>>m)
    {
        int ar1[1000], ar2[1000], i, ans;
        for(i=0; i<m; i++)
            cin>>ar1[i];
        sort(ar1, ar1+m);
        int best = 1e9;
        for(int k=0; k<=(m-n); k++){
            best = min(best, ar1[k+n-1]-ar1[k]);
        }
        cout<<best<<endl;
    }
    return 0;
}
