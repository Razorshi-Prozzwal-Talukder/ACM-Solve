#include<bits/stdc++.h>
using namespace std;
main()
{
    string ps, a[200];
    int n, k;
    while(cin>>n>>k)
    {
        int i, j;
        for(i=0; i<n; i++)
            cin>>a[i];
        cin>>ps;
        int les=0, eql=0;
        for(j=0; j<n; j++)
            if(a[j].size()<ps.size())++les;
        for(j=0; j<n; j++)
            if(a[j].size()==ps.size())++eql;

        cout<<les+(les/k)*5+1<<" "<<(les+eql-1)+(les+eql-1)/k*5+1<<endl;
    }
    return 0;
}
