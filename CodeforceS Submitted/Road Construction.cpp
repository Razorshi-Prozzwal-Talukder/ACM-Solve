#include<bits/stdc++.h>
using namespace std;
vector<int>as;
main()
{
    int n, m;
    while(cin>>n>>m)
    {
        int x, i, j;
        for(x=0; x<m; x++)
        {
            cin>>i;
            as.push_back(i);
            cin>>j;
            as.push_back(j);
        }
        i=1;
        cout<<n-1<<endl;
        sort(as.begin(), as.end());

        for(x=0; x<as.size(); x++)
        {
            if(as[x]==i)i++;
        }
        for(x=1; x<=n; x++)
        {
            if(x!=i)cout<<i<<" "<<x<<endl;
        }
    }
    return 0;
}
