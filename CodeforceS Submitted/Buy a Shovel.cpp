#include<bits/stdc++.h>
using namespace std;
main()
{
    long long k, r, i;
    while(cin>>k>>r)
    {
        i=1;
        while(((k%10)!=0)&&((k%10)!=r))
        {
            k+=(k/i);
            i++;
        }
        cout<<i<<endl;
    }
    return 0;
}
