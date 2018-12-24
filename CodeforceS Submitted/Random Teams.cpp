#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n, m;
    while(cin>>n>>m)
    {
        long long int k, i;
        k=n/m;
        i=n%m;
        cout<<((k*(k+1))/2)*i + ((k*(k-1))/2)*(m-i)<<" "<<((n-m)*(n-m+1))/2<<endl;
    }
    return 0;
}
