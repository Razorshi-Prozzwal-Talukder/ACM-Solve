#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n;
    while(cin>>n)
    {
        long long int k=1, z=0;
        while(true)
        {
            if(n>0)z++;
            else
                break;
            n=n-k;
            k=k*2;
        }
        cout<<z<<endl;
    }
    return 0;
}
