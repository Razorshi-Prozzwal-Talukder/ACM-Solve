#include<bits/stdc++.h>
using namespace std;
main()
{
    int k, l, m, n, d;
    while(cin>>k>>l>>m>>n>>d)
    {
        int i,count=0;
        for(i=1; i<=d; i++)
        {
            if(((i%k)==0)||((i%l)==0)||((i%m)==0)||((i%n)==0))
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
