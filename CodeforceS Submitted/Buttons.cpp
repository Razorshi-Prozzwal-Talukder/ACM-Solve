#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, sum=0;
        for(i=1; i<n; i++)
        {
            sum+=((n-i)*i);
        }
        sum+=n;
        cout<<sum<<endl;
    }
    return 0;
}
