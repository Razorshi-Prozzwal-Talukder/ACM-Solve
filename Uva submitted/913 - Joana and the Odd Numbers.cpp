#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {

        //sum = array[l-1] + array[l-2] + array[l-3];
        cout<<((((n+1)*(n+1))/2)-3)*3<<endl;
    }
    return 0;
}
