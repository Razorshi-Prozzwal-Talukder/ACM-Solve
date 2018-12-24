#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, i, j, tf=0, sf=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>j;
        tf = tf + j;
    }
    for(int k=1; k<=5; k++)
        if((k+tf)%(n+1)!=1)sf++;

        cout<<sf<<endl;

        return 0;
}
