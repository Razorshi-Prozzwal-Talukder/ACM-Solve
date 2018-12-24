#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n;
    while(cin>>n)
    {
        long long int i, ok=0, baki;
        if(n==2)
        {
            cout<<1<<endl;
            return 0;
        }
        for(i=2; i<=n/2; i++)
        {
            baki= n-i;
            if(baki%i==0)ok++;
        }
        cout<<ok+1<<endl;
    }
    return 0;
}
